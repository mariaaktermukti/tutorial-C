#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "students.txt"
#define MAX_LINE_LENGTH 256

typedef struct {
    int id;
    char name[100];
    int age;
    char gender[10];
    char department[50];
    char batch[20];
    float balance; // Student's balance
    float loan;    // Student's loan amount
    char course[100]; // Student's course
    char complaints[200]; // Student's complaints
} Student;

// Function prototype declarations
void registerStudent();
void displayStudents();
void searchStudent();
void processPayment();
void manageLoan();
void addCourse();
void handleComplaints();
void loadFromFile();
void saveToFile();

Student students[100];
int studentCount = 0;

int main() {
    int choice;

    loadFromFile();  // Load data from file at program start

    do {
        printf("\nStudent Management System\n");
        printf("1. Register Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Process Payment\n");
        printf("5. Manage Loan\n");
        printf("6. Add Course to Student Profile\n");
        printf("7. Handle Complaints\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                processPayment();
                break;
            case 5:
                manageLoan();
                break;
            case 6:
                addCourse();
                break;
            case 7:
                handleComplaints();
                break;
            case 8:
                printf("Exiting...\n");
                saveToFile();  // Save data before exiting
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

// Function to register a student
void registerStudent() {
    Student student;

    printf("Enter Student ID: ");
    scanf("%d", &student.id);

    // Clear the input buffer
    while (getchar() != '\n');

    printf("Enter Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';  // Remove newline

    printf("Enter Age: ");
    scanf("%d", &student.age);

    // Clear the input buffer again after scanf
    while (getchar() != '\n');

    printf("Enter Gender: ");
    fgets(student.gender, sizeof(student.gender), stdin);
    student.gender[strcspn(student.gender, "\n")] = '\0';

    printf("Enter Department: ");
    fgets(student.department, sizeof(student.department), stdin);
    student.department[strcspn(student.department, "\n")] = '\0';

    printf("Enter Batch: ");
    fgets(student.batch, sizeof(student.batch), stdin);
    student.batch[strcspn(student.batch, "\n")] = '\0';

    // Initialize balance and loan to zero
    student.balance = 0.0;
    student.loan = 0.0;
    student.course[0] = '\0'; // Initialize to empty
    student.complaints[0] = '\0'; // Initialize to empty

    // Add student to the array
    students[studentCount++] = student;
    printf("Student registered successfully!\n");

    // Save to file immediately after registration
    saveToFile();
}

// Function to display all students
void displayStudents() {
    printf("\nRegistered Students:\n");
    printf("ID\tName\t\tAge\tGender\tDepartment\tBatch\tBalance\tLoan\tCourse\tComplaints\n");
    printf("----------------------------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t%d\t%s\t%s\t%s\t%.2f\t%.2f\t%s\t%s\n",
            students[i].id,
            students[i].name,
            students[i].age,
            students[i].gender,
            students[i].department,
            students[i].batch,
            students[i].balance,
            students[i].loan,
            students[i].course[0] ? students[i].course : "N/A",
            students[i].complaints[0] ? students[i].complaints : "No complaints");
            // strlen(students[i].course) > 0 ? students[i].course : "N/A",
            // strlen(students[i].complaints) > 0 ? students[i].complaints : "No complaints"

        printf("----------------------------------------------------------------------------------------------------------------\n");
    }
}

// Function to search students by ID, department, or batch
void searchStudent() {
    int searchOption;
    char searchValue[50];
    int id;

    printf("Search by: 1. ID 2. Department 3. Batch: ");
    scanf("%d", &searchOption);

    switch (searchOption) {
        case 1:
            printf("Enter Student ID: ");
            scanf("%d", &id);
            for (int i = 0; i < studentCount; i++) {
                if (students[i].id == id) {
                    printf("Student Found: %s, Department: %s, Batch: %s\n", students[i].name, students[i].department, students[i].batch);
                    return;
                }
            }
            printf("Student with ID %d not found.\n", id);
            break;
        case 2:
            printf("Enter Department: ");
            while (getchar() != '\n');  // Clear buffer
            fgets(searchValue, sizeof(searchValue), stdin);
            searchValue[strcspn(searchValue, "\n")] = '\0'; // Remove newline
            for (int i = 0; i < studentCount; i++) {
                if (strcmp(students[i].department, searchValue) == 0) {
                    printf("Student Found: %s, ID: %d, Batch: %s\n", students[i].name, students[i].id, students[i].batch);
                }
            }
            break;
        case 3:
            printf("Enter Batch: ");
            while (getchar() != '\n');  // Clear buffer
            fgets(searchValue, sizeof(searchValue), stdin);
            searchValue[strcspn(searchValue, "\n")] = '\0'; // Remove newline
            for (int i = 0; i < studentCount; i++) {
                if (strcmp(students[i].batch, searchValue) == 0) {
                    printf("Student Found: %s, ID: %d, Department: %s\n", students[i].name, students[i].id, students[i].department);
                }
            }
            break;
        default:
            printf("Invalid search option!\n");
    }
}

// Function to process tuition payment
void processPayment() {
    int id;
    float amount;

    printf("Enter Student ID for payment: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Enter payment amount: ");
            scanf("%f", &amount);
            students[i].balance += amount;
            printf("Payment of %.2f processed. New balance: %.2f\n", amount, students[i].balance);
            saveToFile();
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to manage student loans
void manageLoan() {
    int id;
    float amount;
    int option;

    printf("Enter Student ID for loan management: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("1. Take Loan\n2. Repay Loan\nEnter option: ");
            scanf("%d", &option);
            if (option == 1) {
                printf("Enter loan amount: ");
                scanf("%f", &amount);
                students[i].loan += amount;
                printf("Loan of %.2f taken. Total loan: %.2f\n", amount, students[i].loan);
            } else if (option == 2) {
                printf("Enter repayment amount: ");
                scanf("%f", &amount);
                if (amount > students[i].loan) {
                    printf("Repayment exceeds loan amount!\n");
                } else {
                    students[i].loan -= amount;
                    printf("Repayment of %.2f processed. Remaining loan: %.2f\n", amount, students[i].loan);
                }
            } else {
                printf("Invalid option!\n");
            }
            saveToFile();
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to add a course to a student's profile
void addCourse() {
    int id;

    printf("Enter Student ID to add course: ");
    scanf("%d", &id);

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Enter course name: ");
            while (getchar() != '\n');  // Clear buffer
            fgets(students[i].course, sizeof(students[i].course), stdin);
            students[i].course[strcspn(students[i].course, "\n")] = '\0'; // Remove newline
            printf("Course added to student profile.\n");
            saveToFile();
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to handle complaints
void handleComplaints() {
    int id;

    printf("Enter Student ID to submit complaint: ");
    scanf("%d", &id);

    while (getchar() != '\n');  // Clear buffer

    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) {
            printf("Enter complaint: ");
            fgets(students[i].complaints, sizeof(students[i].complaints), stdin);
            students[i].complaints[strcspn(students[i].complaints, "\n")] = '\0'; // Remove newline
            printf("Complaint submitted.\n");
            saveToFile();  // Save complaint to file
            return;
        }
    }
    printf("Student with ID %d not found.\n", id);
}

// Function to load students from file
void loadFromFile() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        return;  // No file exists yet
    }

    while (fscanf(file, "%d,%[^,],%d,%[^,],%[^,],%[^,],%f,%f,%[^,],%[^\n]\n",
                  &students[studentCount].id,
                  students[studentCount].name,
                  &students[studentCount].age,
                  students[studentCount].gender,
                  students[studentCount].department,
                  students[studentCount].batch,
                  &students[studentCount].balance,
                  &students[studentCount].loan,
                  students[studentCount].course,
                  students[studentCount].complaints) != EOF) {
        studentCount++;
    }

    fclose(file);
}

// Function to save students to file
void saveToFile() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error saving data!\n");
        return;
    }

    for (int i = 0; i < studentCount; i++) {
        fprintf(file, "%d,%s,%d,%s,%s,%s,%.2f,%.2f,%s,%s\n",
                students[i].id,
                students[i].name,
                students[i].age,
                students[i].gender,
                students[i].department,
                students[i].batch,
                students[i].balance,
                students[i].loan,
                students[i].course,
                students[i].complaints);
    }

    fclose(file);
}
