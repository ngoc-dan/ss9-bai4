#include <stdio.h>

int main() {
    int arr[999], n = 0;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");

        int choice;
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Thoat chuong trinh.\n");
            break;
        }

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &n);

                if (n <= 0 || n > 100) {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                    break;
                }

                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                    break;
                }

                printf("Mang hien tai:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                if (n == 100) {
                    printf("Mang da day, khong the them phan tu.\n");
                    break;
                }

                int value, pos;
                printf("Nhap vi tri muon them (0-%d): ", n);
                scanf("%d", &pos);

                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);

                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;

                printf("Da them phan tu thanh cong.\n");
                break;
            }
            case 4: {
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                    break;
                }

                int pos, value;
                printf("Nhap vi tri can sua (0-%d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[pos] = value;

                printf("Da sua phan tu thanh cong.\n");
                break;
            }
            case 5: {
                if (n == 0) {
                    printf("Mang chua duoc nhap.\n");
                    break;
                }

                int pos;
                printf("Nhap vi tri can xoa (0-%d): ", n - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }

                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;

                printf("Da xoa phan tu thanh cong.\n");
                break;
            }
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }

    return 0;
}

