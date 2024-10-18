#include <stdio.h>
int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long katryoshkas = 0;
    // First, try to form as many Katryoshkas as possible with two eyes, one mouth, and one body
    long long min_eyes_mouth_body;
    if (n >= 2 && m >= 1 && k >= 1) {
        if (n / 2 < m) {
            if (n / 2 < k) {
                min_eyes_mouth_body = n / 2;
            } 
            else {
                min_eyes_mouth_body = k;
            }
        } 
        else {
            if (m < k) {
                min_eyes_mouth_body = m;
            } 
            else {
                min_eyes_mouth_body = k;
            }
        }
    } else {
        min_eyes_mouth_body = 0;
    }
    katryoshkas += min_eyes_mouth_body;
    n -= min_eyes_mouth_body * 2;
    m -= min_eyes_mouth_body;
    k -= min_eyes_mouth_body;

    // Then, try to form Katryoshkas using two eyes and one body
    long long min_eyes_body;
    if (n >= 2 && k >= 1) {
        if (n / 2 < k) {
            min_eyes_body = n / 2;
        } 
        else {
            min_eyes_body = k;
        }
    } 
    else {
        min_eyes_body = 0;
    }
    katryoshkas += min_eyes_body;
    n -= min_eyes_body * 2;
    k -= min_eyes_body;

    // Finally, try to form Katryoshkas using one eye, one mouth, and one body
    long long min_eye_mouth_body;
    if (n >= 1 && m >= 1 && k >= 1) {
        if (n < m) {
            if
             (n < k) {
                min_eye_mouth_body = n;
            } 
            else {
                min_eye_mouth_body = k;
            }
        }
         else {
            if (m < k) {
                min_eye_mouth_body = m;
            } 
            else {
                min_eye_mouth_body = k;
            }
        }
    } 
    else {
        min_eye_mouth_body = 0;
    }
    katryoshkas += min_eye_mouth_body;

    // Print the total number of Katryoshkas formed
    printf("%lld\n", katryoshkas);

    return 0;
}
