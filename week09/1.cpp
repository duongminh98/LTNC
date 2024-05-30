#include<bits/stdc++.h>
using namespace std;
typedef struct {
    int recent;
    int score;
} Highscore;

typedef struct {
    Highscore highscore[8];
} Highscores;
Highscores a;
bool cmp(Highscore a,Highscore b)
{
    return a.score>b.score;
}
int main()
{
    for (int i = 0; i < 8; i++)
	{
		a.highscore[i].score = rand();
	}
	Highscore newHighscores[9];
	for(int i=0;i<8;i++)
    {
        newHighscores[i] = a.highscore[i];
    }
    sort(newHighscores,newHighscores+8,cmp);
    for(int i=0;i<8;i++)
    {
        cout<<newHighscores[i].score<<" ";
    }
}
