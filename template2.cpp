#include<iostream>
using namespace std;
template <typename T>
class Leaderboard
{
	string name[100];
	T score[100];
	int count = 0;
public:
	Leaderboard(string n, T s)
	{
		name[count] = n;
		score[count] = s;
		count++;
	}
	void addplayer(string n, T s)
	{
		if (count <= 100)
		{
			name[count] = n;
			score[count] = s;
			count++;
		}
		else
		{
			cout << "Limit reached." << endl;;
		}
	}
	void show()
	{
		cout <<endl<< "Player     Score" << endl;
		for (int i = 0; i < count; i++)
		{
			cout << name[i] << "    " << score[i]<<endl;
		}
	}
	void winner()
	{
		T max = 0;
		int index;
		for (int i = 0; i < count; i++)
		{
			if (score[i] > max)
			{
				max = score[i];
				index = i;
			}

		}
		cout << "Winner: " << endl;
		cout<< name[index] << "    " << score[index];
	}
	};
int main()
{
	Leaderboard <int> l1("Haseeb", 98);
	l1.addplayer("Unknown", 23);
	l1.addplayer("Known", 99);
	Leaderboard <double> l2("Haseeb", 3.56);
	l2.addplayer("Unknown", 3.43);
	l2.addplayer("Known", 3.37);
	cout << "By score: " << endl;
	l1.show();
	l1.winner();
	cout << endl <<endl<< "By GPA:  " << endl;
	l2.show();
	l2.winner();
}
