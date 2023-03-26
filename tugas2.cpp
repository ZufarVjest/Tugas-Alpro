// Muhammad Asyam Zufar - A11.2022.14436
#include <iostream>

using namespace std;

//fungsi max
int max(int a, int b){
    int max;
    if(a>b){
        max=a;
    }
    else {
        max=b;
    }
    return max;
}


//fungsi min
int min (int a,int b){
     int min;
    if(a>b){
        min=b;
    }
    else {
        min=a;
    }
    return min;
}
int maxArray(int arr[], int size) {
   int max = arr[0];

   for(int i = 1; i < size; i++) {
      if(arr[i] > max) {
         max = arr[i];
      }
   }

   return max;
}

int minArray(int arr2[], int size2) {
   int min = arr2[0];

   for(int i = 1; i < size2; i++) {
      if(arr2[i] < min) {
         min = arr2[i];
      }
   }

   return min;
}

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isOdd(int num) {
    if (num % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}

bool isFactor(int num, int factor) {
    if (num % factor == 0) {
        return true;
    }
    else {
        return false;
    }
}

int search(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

bool isfound(int arr[], int n, int x) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return true;
        }
    }
    return false;

int sumEven(int arr5[], int n) {
   int sum = 0;
   for(int i = 0; i < n; i++) {
      if(arr5[i] % 2 == 0) {
         sum += arr5[i];
      }
   }
   return sum;
}

int sumOdd(int arr6[], int n) {
   int sum2 = 0;
   for(int i = 0; i < n; i++) {
      if(arr6[i] % 2 != 0) {
         sum2 += arr6[i];
      }
   }
   return sum2;
}

int main() {

    // Max
    int num1 = 16, num2 =256 , result;
    result = max(num1, num2);
    cout << "Angka terbesar : " << result << endl;

    cout << endl;

    // Min
    int num3 = 16, num4 = 256, result2;
    result2 = min(num3, num4);
    cout << "Angka terkecil : " << result2 << endl;

    cout << endl;

    // Max Array
    int arr[] = {5, 9, 22, 11, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = maxArray(arr, size);
    cout << "Nilai maksimum dari array adalah: " << max << endl;

    cout << endl;

    // Min Array
    int arr2[] = {5, 9, 22, 11, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int min = minArray(arr2, size2);
    cout << "Nilai minimum dari array adalah: " << min << endl;

    cout << endl;

    // isEven
    int num;
    cout << "Input sebuah bilangan bulat: ";
    cin >> num;
    if(isEven(num)) {
            cout << num << " adalah bilangan genap." << endl;
    } else {
            cout << num << " bukan bilangan genap." << endl;
    }

    cout << endl;

    // isOdd
    cout << "Input sebuah bilangan bulat: ";
    cin >> num2;
    if(isOdd(num2)) {
            cout << num2 << " adalah bilangan ganjil." << endl;
    } else {
            cout << num2 << " bukan bilangan ganjil." << endl;
    }

    cout << endl;

    // isFactor
    int n;
    cout << "Input sebuah bilangan bulat: ";
    cin >> n;
    cout << "Input sebuah bilangan bulat yang ingin Anda cek: ";
    cin >> num3;
    if(isFactor(n, num3)) {
            cout << num3 << " adalah faktor dari " << n << "." << endl;
    } else {
            cout << num3 << " bukan faktor dari " << n << "." << endl;
    }

    cout << endl;

    // Search
    int x;
    cout << "Input jumlah elemen array: ";
    cin >> n;
    int arr3[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr3[i];
    }
    cout << "Input sebuah nilai yang ingin Anda cari: ";
    cin >> x;
    int result3 = search(arr3, n, x);
    if(result3 == -1) {
        cout << "Nilai " << x << " tidak ditemukan di dalam array." << endl;
    } else {
        cout << "Nilai " << x << " ditemukan di indeks ke-" << result3 << " dari array." << endl;
    }

    cout << endl;

    // isFound
    cout << "Input jumlah elemen array: ";
    cin >> n;
    int arr4[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr4[i];
    }
    cout << "Input sebuah nilai yang ingin Anda cek: ";
    cin >> x;
    if(isFound(arr4, n, x)) {
      cout << "Nilai " << x << " ditemukan di dalam array." << endl;
    } else {
      cout << "Nilai " << x << " tidak ditemukan di dalam array." << endl;
    }

    cout << endl;

    //SumEven
    cout << "Input jumlah elemen array: ";
    cin >> n;
    int arr5[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr5[i];
    }
    int sum = sumEven(arr5, n);
    cout << "Jumlah bilangan genap di dalam array: " << sum << endl;

    cout << endl;

    // SumOdd
    cout << "Input jumlah elemen array: ";
    cin >> n;
    int arr6[n];
    for(int i=0; i<n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr6[i];
    }
    int sum2 = sumOdd(arr6, n);
    cout << "Jumlah bilangan ganjil di dalam array: " << sum2 << endl;

    return 0;
}
