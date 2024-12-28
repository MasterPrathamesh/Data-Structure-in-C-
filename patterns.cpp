// #include <iostream>
// using namespace std;

// int main() {
  // patterns
  // 1. Square pattern
  /*int n ;
  cout << "Enter the value of n : " << endl ;
  cin >> n ;
  int i = 1 ;
  while(i<=n){
    int j = 1 ;
    while(j<=n){
      cout << " * " ;
      j = j + 1 ;
    }
    cout << endl;
    i = i + 1 ;
  }
  */

  /*int n;
  cout << "Enter the value of n : " << endl;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << " " << i << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
  */

  // 2. Hollow square pattern:
  // 1  2  3
  // 1  2  3
  // 1  2  3

  /* int n;
   cout << "Enter the value of n : " << endl;
   cin >> n;
   int i = 1;
   while (i <= n) {
     int j = 1;
     while (j <= n) {
       cout <<" " << j << " " ;
       j = j + 1;
     }
     cout << endl;
     i = i + 1;
   }
 */

  // print the following pattern :
  // 3  2  1
  // 3  2  1
  // 3  2  1

  // int n ;
  // cout << "Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout << " " << n - j + 1 << " ";
  //     j = j + 1 ;
  //   }
  //   cout << endl ;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // 1  2  3  4
  // 5  6  7  8
  // 9  10 11 12
  // 13 14 15 16

  // int n ;
  // cout << "Enter the value of n : " << endl;
  // cin >> n ;
  // int i = 1 ;
  // int count = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=n){
  //     cout <<" " << count << " ";
  //     count = count + 1 ;
  //     j = j + 1 ;
  //   }
  //   cout << endl;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // *
  // * *
  // * * *
  // * * * *

  // int n ;
  // cout << " Enter the value of n : " << endl;
  // cin >> n ;
  // int i = 1;
  // while(i<=n){
  //     int j = 1 ;
  //     while(j<=i){
  //       cout <<" " << "*" << " " ;
  //       j = j + 1 ;
  //     }
  //     cout << endl ;
  //     i = i + 1 ;
  // }

  // print the following pattern :
  // 1
  // 2  2
  // 3  3  3
  // 4  4  4  4

  // int n ;
  // cout << " Enter the value of n : " << endl;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=i){
  //     cout << " " << i << " " ;
  //     j = j + 1 ;
  //   }
  //   cout << endl ;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // 1
  // 2  3
  // 4  5  6
  // 7  8  9  10

  // int n ;
  // cout << "Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1 ;
  // int count = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=i){
  //     cout <<" " << count << " ";
  //     count = count + 1 ;
  //     j = j + 1 ;
  //   }
  //   cout << endl ;
  //   i = i + 1;
  // }

  // print the following pattern :
  // 1
  // 2  3
  // 3  4  5
  // 4  5  6  7

  // int n ;
  // cout << "Enter the value of n : " << endl;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   int val = i ;
  //   while(j<=i){
  //     cout << " " << val << " ";
  //     val = val + 1 ;
  //     j = j + 1 ;
  //   }
  //   cout << endl;
  //   i = i + 1 ;
  // }

  // print the following pattern using another method :
  // 1
  // 2  3
  // 3  4  5
  // 4  5  6  7

  // int n ;
  // cout << "Enter the value of n : " << endl;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=i){
  //     cout << " " << i + j - 1 << " ";
  //     j = j + 1 ;

  //   }
  //   cout << endl ;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // 1
  // 2  1
  // 3  2  1
  // 4  3  2  1

  // int n ;
  // cout << " Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=i){
  //     cout << " " << i - j + 1 << " ";
  //     j = j + 1 ;

  //   }
  //   cout << endl;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // A  A  A
  // B  B  B
  // C  C  C

  // int n ;
  // cout << " Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1 ;
  //   while(j<=n){
  //     char ch = 'A' + i - 1 ;
  //     cout << " " << ch << " ";
  //     j = j + 1 ;
  //   }
  //   cout << endl;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // A  B  C
  // A  B  C
  // A  B  C

  //  int n ;
  //  cout << "Enter the value of n : " << endl;
  //  cin >> n ;
  //  int i = 1 ;
  // char start = 'A';
  //  while(i<=n){
  //    int j=1 ;
  //    while(j<=n){
  //      cout << " " << start << " " ;
  //      start = start + 1 ;
  //      j = j + 1 ;
  //    }
  //    cout << endl ;
  //    i = i + 1 ;
  //  }

  // print the following pattern :
  // A  B  C
  // B  C  D
  // C  D  E

  // int n ;
  // cout << " Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1 ;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     char ch = 'A' + i + j - 2 ;
  //     cout << " " <<  ch << " " ;
  //     j = j + 1 ;
  //   }
  //   cout << endl;
  //   i = i + 1 ;
  // }

  // print the following pattern :
  // A
  // B  B
  // C  C  C
  // D  D  D  D

  // int n ;
  // cout << "Enter the value of n : " << endl ;
  // cin >> n ;
  // int i = 1;
  // while(i<=n){
  //     int j = 1 ;
  //     while(j<=i){
  //         char ch = 'A' + i - 1;
  //         cout << " " << ch << " ";
  //         j = j + 1 ;
  //     }
  //     cout << endl;
  //     i = i + 1 ;
  // }

  // print the following pattern .
  //       *
  //     * *
  //   * * *
  // * * * *

  // int n;
  // cout << "Enter the value of N : ";
  // cin >> n;
  // int i = 1;
  // while (i <= n) {
  //   int space = n - i;
  //   while (space) {
  //     cout << " ";
  //     space = space - 1;
  //   }
  //   // printing the starts
  //   int j = 1;
  //   while (j <= i) {
  //     cout << " *";
  //     j = j + 1;
  //   }
  //   cout << endl;
  //   i = i + 1;
  // }








  
// }