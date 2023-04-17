#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Music {
private:
	string title;
	string artist;
	string album;
	int year;

public:
	Music(string title, string artist, string album, int year ) {
		this->title = title;
	}

	string getTitle() {
		return title;
	}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
			return album;
	}
	int getYear() {
		return year;
	}

};

class MusicStreamService {
private:
	string serviceName;
	vector<Music> musicList;

public:
	void addMusic(string title, string artist, string album, int year) {
		Music newMusic(title, artist, album, year);
		musicList.push_back(newMusic);
		cout << title << " by " << artist << " added to " << serviceName << endl;
	}
	//title로 musicList에서 검색하여 반환
	Music* searchByTitle(string title) {
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getTitle() == title) {
				return &musicList[i];
			}
		}

		return NULL;
	}

	//artist로 musicList에서 검색하여 반환

	vector<Music*> searchByArtist(string artist) {
		vector<Music*>result;
		for (int i = 0; i < musicList.size(); i++) {
			if (musicList[i].getArtist() == artist ) {
				result.push_back(&musicList[i]);
			}
		}
		return result;
	}
};