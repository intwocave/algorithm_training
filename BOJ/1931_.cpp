#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

// int value[10];

int main()
{
	int N, end, begin;

	vector<pair<int, int>> v;

	cin >> N ;

	for (int i = 0; i < N; i++)
	{
		cin >> begin >> end;
		v.push_back(make_pair(end, begin));
	}
	
	sort(v.begin(), v.end());
    // cout << endl;
    // for (auto a:v) cout << a.first << " " << a.second << endl;
	
	int time = v[0].first;
	int count = 1;
	for (int i = 1 ;i < N; i++) 
	{
		if (time <= v[i].second )
		{
			count++;
			time = v[i].first;
		}
	}

	cout << count;
}