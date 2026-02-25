#include "iostream"
#include "string"
#include "unordered_map"

using namespace std;

class InputBuffer
{
    private:
        unordered_map<string,string> events;
    public:
        void SaveEvent(const string& name, const string& sequence);
        void CallEvent(const string& sequence);
};

void InputBuffer::SaveEvent(const string& name, const string& sequence)
{
    events[sequence] = name;
}

void InputBuffer::CallEvent(const string& sequence)
{
    auto interator = events.find(sequence);
    if(interator != events.end())
    {
        cout<< "Event Triggered: " << interator->second << endl;
    }
    else
    {
        cout << "Event not found for the provided sequence." << endl;
    }
}

int main()
{

    InputBuffer InputBufferComponent;
    string EventName, Inputs, Key;
    int numberOfEvents;

     cout << "Insert the number of events: " << endl;
    cin >> numberOfEvents;
    cout << endl;

    for(int i = 0; i < numberOfEvents; i++)
    {
        cout<< "insert event name: ";
        cin>> EventName;
        cout<< "\n" << "Insert inputs command: ";
        cin>> Inputs;
        InputBufferComponent.SaveEvent(EventName,Inputs);
        cout<< endl;
    }
    
    cout<< "insert sequence for call event: " << endl;
    cin>> Key;
    
    InputBufferComponent.CallEvent(Key);

    return 0;
}