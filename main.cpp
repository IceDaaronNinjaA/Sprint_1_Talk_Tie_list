#include <iostream>
#include <list>
#include <string>
using namespace std;

class Talk
{
public:
    string speaker;
    string tie_color;
    int talk_number;
};


void creat_talk(list<Talk>& talks);
void list_talk(const list<Talk>& talks);

int main()
{
    int run = 1;
    int input;
    list<Talk> talks;
    
    while(run == 1)
    {
        cout << "1. add to list\n2. read list\n3. end\n";
        cin >> input;
        if(input == 1)
        {
            creat_talk(talks);
        }
        else if(input == 2)
        {
            list_talk(talks);
        }
        else
        {
            run = 0;
        }
    }
    return 0;
}


void creat_talk(list<Talk>& talks)
{
    string input;
    Talk newTalk;
    cout << "Who is the speaker? ";
    cin >> input;
    newTalk.speaker = input;
    cout << "what was the tie or dress color? ";
    cin >> input;
    newTalk.tie_color = input;
    newTalk.talk_number = talks.size() + 1;
    talks.push_back(newTalk);

}

void list_talk(const list<Talk>& talks)
{
    list<Talk>::const_iterator current = talks.begin();
    
    
        while(current != talks.end())
    {
        cout << "Speaker: " << current->speaker
             << " Color: " << current->tie_color << ".\n";
        
             ++current;
    }
}