//Feature #2 - Adding Music to Your Code
//Group Name: SoloCode
//Member: Noah Kelly (nkelly002@student.franciscan.edu)

//Feel free to email or dm me if you have any questions.  I am happy to help!

#include <iostream>
//The following headers are need to implement this feature
#include <Windows.h> //This will not work on Linux/Unix
#include <mmsystem.h>
using namespace std;

#pragma comment(lib, "winmm.lib")

int main() {
    //Specify file path
    const wchar_t* filePath = L"C:\\Users\\Noah-\\OneDrive\\Franciscan University of Steubenville\\4 Spring 2024\\Data Structures\\RPG Quest Stuff\\Battle.wav";
    //Play the sound
    PlaySoundW(filePath, NULL, SND_FILENAME | SND_SYNC);
    return 0;
}

//Note: You will likely have issues compiling this code (It took me quite a few attempts)
//My recommendation is that if you have the MINGW64 compiler like me, compile in cmd prompt
//Use the g++ cmd to create an exe file -- you will need the file path
//Best of luck!!
