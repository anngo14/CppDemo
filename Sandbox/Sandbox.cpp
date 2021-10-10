#include <iostream>
#include <array>
#include <vector>

using namespace std;

struct Movie {
    string name;
    string genre;
    int year;

    Movie() {
        cout << "Default Constructor" << endl;
        name = "N/A";
        genre = "N/A";
        year = 0;
    }

    Movie(string name, string genre, int year) {
        cout << "Explicit Constructor" << endl;
        this->name = name;
        this->genre = genre;
        this->year = year;
    }

    void printMovie() {
        cout << "Print Movie Method" << endl;
        cout << "name = " << name << endl;
        cout << "genre = " << genre << endl;
        cout << "year = " << year << endl;
        cout << endl;
    }    
};

//Prototypes
void printArray(int arr[], int size);
void switchElements(int arr[], int size);
void deleteAllEvens(int arr[], int size);
vector<int> deleteAllOdds(vector<int>);
void printVector(vector<int>);
void sumOddsAndEvens(vector<int>);
void printMovie(Movie movie);

int main()
{
    cout << "For Loop" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    cout << "While Loop" << endl;
    int index = 0;
    while (index < 5) {
        cout << index << " ";
        index++;
    }
    cout << endl << endl;

    cout << "Do While Loop" << endl;
    index = 0;
    do {
        cout << index << " ";
        index++;
    } while (index < 5);
    cout << endl << endl;

    int a[5]; 

    cout << "Initial Array - No Data" << endl;
    printArray(a, 5);
  
    for (int i = 0; i < 5; i++) {
        a[i] = rand() % 10 + 1;
    }

    cout << "Array with Data" << endl;
    printArray(a, 5);

    cout << "Array with Switched Elements" << endl;
    switchElements(a, 5);
    printArray(a, 5);

    cout << "Array with No Even Elements" << endl;
    deleteAllEvens(a, 5);
    printArray(a, 5);

    vector<int> b;

    for (int i = 0; i < 5; i++) {
        b.push_back(rand() % 10 + 1);
    }

    cout << "Vector Initialized With Data" << endl;
    printVector(b);

    cout << "Vector with No Odd Elements" << endl;
    b = deleteAllOdds(b);
    printVector(b);

    cout << "Sum All Odds and Evens" << endl;
    sumOddsAndEvens(b);
    cout << endl;

    cout << "Pointer" << endl;
    int c = 10;
    int* ptr = &c;
    cout << "c = " << c << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    c = 20;
    cout << "*ptr after variable change = " << *ptr << endl;
    *ptr = 30;
    cout << "*ptr after *ptr change = " << *ptr << endl;
    cout << "c after *ptr change = " << c << endl << endl;

    cout << "Pointer Math" << endl;
    char array[5] = { 'h', 'e', 'l', 'l', 'o' };
    char* pArray = array;

    for (int i = 0; i < 5; i++) {
        cout << *pArray++;
    }
    cout << endl << "Out of Index *pArray = " << *pArray << endl;
    cout << endl;

    Movie m = Movie();
    printMovie(m);

    m = Movie("Terminator", "Action", 2001);
    m.printMovie();
}

void printArray(int arr[], int size) {
   
}

void switchElements(int arr[], int size) {
   
}

void deleteAllEvens(int arr[], int size) {
   
}

vector<int> deleteAllOdds(vector<int> vect) {
   
}

void printVector(vector<int> vect) {
  
}

void sumOddsAndEvens(vector<int> vect) {
    
}

void printMovie(Movie movie) {
   
}