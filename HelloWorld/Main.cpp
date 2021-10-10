#include <iostream>
#include <vector>
using namespace std;

//Function Declarations
int indexOfMovie(string name, vector<string> movieNames);

int main() {
	char userInput; 
	string movieName;
	int year;
	string genre;
	vector<string> movieNames;
	vector<int> years;
	vector<string> genres;

	while (true) {
		cout << "Menu" << endl;
		cout << "A - Add Movie" << endl;
		cout << "R - Remove Movie" << endl;
		cout << "O - Output Movie Info" << endl;
		cout << "C - Output Catalog Info" << endl;
		cout << "Q - Quit Program" << endl << endl;
		cout << "Choose an option: ";
		cin >> userInput;

		switch (userInput) {
			case 'A':
			{
				cout << "Movie Name: ";
				cin >> movieName;

				cout << "Year: ";
				cin >> year;

				cout << "Genre: ";
				cin >> genre;

				movieNames.push_back(movieName);
				years.push_back(year);
				genres.push_back(genre);

				cout << "Added " << movieName << " to the catalog" << endl;
				break;
			}	
			case 'R':
			{
				cout << "Movie Name: ";
				cin >> movieName;

				int index = indexOfMovie(movieName, movieNames);
				if (index == -1) {
					cout << "Cannot find " << movieName << endl;
					break;
				}
				else {
					movieNames.erase(movieNames.begin() + index);
					years.erase(years.begin() + index);
					genres.erase(genres.begin() + index);
				}
				break;
			}
			case 'O':
			{
				cout << "Movie Name: ";
				cin >> movieName;

				int index = indexOfMovie(movieName, movieNames);
				if (index == -1) {
					cout << "Cannot find " << movieName << endl;
					break;
				}
				else {
					cout << "Name: " << movieNames[index] << endl;
					cout << "Year: " << years[index] << endl;
					cout << "Genre: " << genres[index] << endl;
				}
				break;
			}
			case 'C':
				cout << "There are " << movieNames.size() << " movies in the catalog" << endl << endl;
				
				for (int i = 0; i < movieNames.size(); i++) {
					cout << "Name: " << movieNames[i] << endl;
					cout << "Year: " << years[i] << endl;
					cout << "Genre: " << genres[i] << endl << endl;
				}
				break;
			case 'Q':
				cout << "Quitting Program";
				return 0;
			default:
				cout << "Unrecognized Command";
		}
		cout << endl;

	}
}

int indexOfMovie(string name, vector<string> movieNames) {
	for (int i = 0; i < (int) movieNames.size(); i++) {
		if (movieNames[i] == name) {
			return i;
		}
	}
	return -1;
}