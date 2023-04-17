#include"sportcar.h"
#include"Rec.h"
#include"smartHome.h"
#include"Pet.h"
#include"music.h"

int main()
{
	/*
	Car     yourCar;
	//myCar (100,  "my car", 4);
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 7;
	yourCar.display();
	yourCar.changeGear();
	yourCar.display();
	yourCar.speedUp();

	SportsCar myCar;
	myCar.setTurbo(ture);
	myCar.speedUp();
	myCar.display();
	return 0;

	*/

	/*
	Rectangle r1(4, 5);
	printf("recyangle 1 Area : %1f", r1.getArea());
	std::cout << "rectangle 1 Area:" << r1.getArea() << std.endl;
	std::cout << "Is sqre?" <<

	*/
	/*
	SmartHome myHome("홍길동", 23, 40, ture);
	myHome.
	*/

	/*
	Pet myPet("Lucky", 11, "dog");
	cout << "My Pet name is" << myPet.getName() << endl;
	cout << "My Pet age is" << myPet.getAge() << endl;

	Pet myPet("Cookie", 11, "cat");
	cout << "My Pet name is" << myPuppy.getName() << endl;
	cout << "My Pet age is" << myPully.getAge() << endl;
	*/

	MusicStreamService myservice("MyMusic");
	myservice.addMusic("아니근데진짜", "LUCY", "Album", 2023);
	myservice.addMusic("동문서답", "LUCY", "Album", 2023);
	myservice.addMusic("Ditto", "Newjeans", "Album", 2023);


	cout << "Enter the music title :";
	cin >> music_title;
	Music* result = myservice.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found : " << result->getTitle() << "By" << result->getArtist() << endl;
	}

	string srtist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;
	vector<Music*> artistResult = myservice.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << "sing by " << artist_name << " : " endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}

	}
	else {
		cout << "Not Found"
	}
}