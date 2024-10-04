#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void Task1();
void Task2();
void Task3();
void Task4();

void Task1() {
	vector<int> nums;
	int counter = 0;
	int input;

	while (counter < 10) {
		cout << "Enter any number BUT 5!!!: " << endl;
		cin >> input;
		nums.push_back(input);
		counter++;
		if (nums[nums.size() - 1] == 5) {
			cout << "Hey you weren't supposed to enter that!!";
			break;
		}
	}
	if (counter > 10) {
		cout << "Wow, you're more patient than I am, you win." << endl;
	}
	
}

void Task2() {
	vector<int> nums;
	int counter = 0;
	int input;

	while (counter < 5) {
		cout << "Enter a number: " << endl;
		cin >> input;
		nums.push_back(input);
		counter++;
	}

	for (int i = 0; i < nums.size(); i++) {
		cout << "Index " << i << " = " << nums[i] << endl;
	}
}

void Task3() {
	ifstream alphabet("alphabet.txt");
	ofstream upperAlphabet("upper.txt");
	vector<char> chars;
	vector<char> temp;
	string s;
	char upper;

	while (getline(alphabet, s)) {
		for (char c : s) {
			temp.push_back(c);
		}
	}
	for (int i = 0; i < temp.size(); i++) {
		chars.push_back(toupper(temp[i]));
	}

	for (int i = 0; i < chars.size(); i++) {
		upperAlphabet << chars[i] << endl;
	}
}

void Task4() {
	ifstream Maze("Maze.txt");	
	int rows = 10;
	int cols = 16;
	vector<vector<char>> maze(rows, vector<char>(cols));
	string s;

	for (int i = 0; i < rows && getline(Maze, s); i++) {
		for (int j = 0; j < cols && j < s.length(); j++) {
			maze[i][j] = s[j];
		}
	}

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << maze[i][j];
		}
		cout << endl;
	}
}

int main() {
	// Task1();
	// Task2();
	// Task3();
	Task4();

	return 0;
}