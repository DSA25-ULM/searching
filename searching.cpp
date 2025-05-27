#include <iostream>
#include <conio.h>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;


void sequentialSearch(const vector<int> &nums, int target){
    // TODO
}

void binarySearch(const vector<int> &nums, int target){
    // TODO
}

/// use this to clear screen, change if necessary
void clearScreen(){
    system("cls");
}

// use this to  print your answer
void explain(){

}


int main() {
    int opt, target;
    do {
        cout << "Pilih menu" << endl;
        cout << "1. Sequential Searching" << endl;
        cout << "2. Binary Searching" << endl;
        cout << "3. Jelaskan Perbedaan Sequential Searching dan Binary Searching!" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilih: ";
        cin >> opt;

        switch (opt) {
            case 1: {
                vector<int> nums (100);
                mt19937_64 rng(random_device{}());
                uniform_int_distribution<int> dist(1, 50);

                for (auto &val: nums) {
                    val = (dist(rng));
                }

                cout << "100 angka acak telah digenerate.\n";

                cout << "Nums:\n";
                for(int i = 0; i < nums.size(); i++) cout << '['<< i << "]:" << nums[i] << ' ';
                cout << '\n';

                cout << "Masukkan angka yang ingin dicari: "; cin >> target;
                
                sequentialSearch(nums, target);
                break;
            }

            case 2: {
                int size;
                cout << "Masukkan ukuran vector: ";
                cin >> size;

                vector<int> nums(size);
                mt19937_64 rng(random_device{}());
                uniform_int_distribution<int> dist(1, 100);

                for (auto &val: nums) {
                    val = (dist(rng));
                }

                sort(nums.begin(), nums.end());
                cout << size << " angka telah digenerate dan diurutkan.\n";

                cout << "Nums:\n";
                for(int i = 0; i < nums.size(); i++) cout << '['<< i << "]:" << nums[i] << ' ';
                cout << '\n';

                cout << "Masukkan angka yang ingin dicari: "; cin >> target;

                binarySearch(nums, target);
                break;
            }

            case 3:
                explain();
                break;

            case 4:
                cout << "\nTERIMA KASIH\n";
                cout << "Programme was made by Fulan (24xxxxxxxxxxx)" << endl;
                break;

            default:
                cout << "Opsi tidak terdefinisi, mohon masukkan ulang opsi" << endl;
                break;
        }

        if (opt != 4) {
            cout << "\nTekan sembarang tombol untuk melanjutkan...";
            getch();
            clearScreen();
        }

    } while (opt != 4);

    return 0;
}