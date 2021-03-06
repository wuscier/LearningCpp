// smart_pointers.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <memory>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Song {
public:

	Song() {}
	Song(wstring artist, wstring title) :artist{ artist }, title{ title } {}

	wstring artist{L""};
	wstring title{L""};
};

int main()
{

	vector<shared_ptr<Song>> v;

	v.push_back(make_shared<Song>(L"Bob Dylan", L"The Times They Are A Changing"));
	v.push_back(make_shared<Song>(L"Justin Bieber", L"As Long As You Love Me"));
	v.push_back(make_shared<Song>(L"Kanye West", L"New York"));

	vector<shared_ptr<Song>> v2;

	remove_copy_if(v.begin(), v.end(), back_inserter(v2), [](shared_ptr<Song> s) {
		return s->artist.compare(L"Justin Bieber") == 0;
	});

	for (const auto& s : v2)
	{
		wcout << s->artist << L":" << s->title << endl;
	}


	return 0;
}

