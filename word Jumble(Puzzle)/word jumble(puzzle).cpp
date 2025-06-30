#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>


using namespace std;

int main()
{
enum{WORD, HINT, NUM_FIELDS};
const int NUM_WORDS = 5;
const string WORDS[NUM_WORDS][NUM_FIELDS] =
{
	{"W5 all", "Do you feel you are banging"},
	{"Glasses", "these might help you see the answer"},
	{"Labored", "Going sowly is it"},
	{ "Persistent", "Keep at it"},
	{"Jumble", "It what the game is about!!"}
};
srand(static_cast<unsigned int>(time(0)));
int choice = (rand() % NUM_WORDS);
string theword = WORDS[choice][WORD]; //word to guess;
string thehint = WORDS[choice][HINT]; //hint for word;
string jumble = theword;
int length = jumble.size();
for (int i = 0; i < length; i++) {
	int index1 = (rand() % length);
	int index2 = (rand() % length);
	char temp = jumble[index1];
	jumble[index1] = jumble[index2];
	jumble[index2] = temp;
}
cout << "Welcome to Word Jumble\n\n";
cout << "Unscrmble the letters to make a word\n";
cout << "Enter 'hint' for a hint";
cout << "Enter 'quit' to quit the game\n\n";
cout << "The jumble is " << jumble;
string guess;
cout << "\n\n your guess: ";
cin >> guess;

while ((guess != theword) && (guess != "quit")) {
	if (guess == "hint") {
		cout << "The Hint";
	}
	else {
		cout << "Sorry, that not it";
	}cout << "\n\n Your Guess: ";
	cin >> guess;
	if (guess == theword) {
		cout << "\nThat it! you guesses it\n";
	}
	cout << "Thanks for participating";
	return 0;
}


}