#include<iostream>
#include<conio.h> // for the gech();
#include<string.h> //for string lowercaseInput or output
#include<stdio.h>//for C 
#include<fstream>// for file
#include<cctype>// for tolower and toupper
using namespace std;
//Function for convert to lowercase
    string tolower(const string &str)
    {
        string result;
        for( char c : str)
        {
            result += tolower(c);
        }
        return result;
    }
int main()
{
    //Questions : 
    string q1 = "hi";
    string q2 = "how are you?";
    string q3 = "what are you doing now?";
    string q4 = "what is your name?";
    string q5 = "what kind of help I can assist from you?";
    string q6 = "what should I do now?";
    string q7 = "do you have any feelings?";
    string q8 = "where do you live?";
    string q9 = "what is your hobby?";
    string q10 = "who is your best friend?";
    string q11 = "do you marry me?";
    string q12 = "where is bangladesh?";
    string q13 = "tell me about the history of bangladesh?";
    string q14 = "where are you from?";
    string q15 = "suggest me c++ playlist on youtube";
    //Write Questions from variables to the file;
    ofstream outputFil("question.txt");
    if(outputFil.is_open())
    {
        outputFil << q1 <<endl;
        outputFil << q2 <<endl;
        outputFil << q3 <<endl;
        outputFil << q4 <<endl;
        outputFil << q5 <<endl;
        outputFil << q6 <<endl;
        outputFil << q7 <<endl;
        outputFil << q8 <<endl;
        outputFil << q9 <<endl;
        outputFil << q10 <<endl;
        outputFil << q11 <<endl;
        outputFil << q12 <<endl;
        outputFil << q13 <<endl;
        outputFil << q14 <<endl;
        outputFil << q15 <<endl;
    }
    //Answer of the Questions:
    string line1 = "  > Hello! How can I assist you today?\n";
    string line2 = "  > I'm doing well, thank you! How about you? Anything on you mind that you'd like to chat about?\n";
    string line3 = "  > I'm here to help you! Right now, I'm waiting for your next question or request. What can I assist you with?\n";
    string line4 = "  > I'm MAIBA! \nThe full from of my name is:'Micro Artificial Intelligence Biomatrice Ambition'. How can I assist you today?\n";
    string line5 = "  > I can help with a wide range of tasks and inquires! Whether you need information on a particular topic, assistance with writing, generating ideas, brainstroming, learning some thing new, or just want to have a conversation, feel free to ask, Just let me know what you need, and I'll do my best to assist you!\n";
    string line6 = "  > That depends on your interests, goals, and current situation. If you're looking for something specific, could you provide more context?\n";
    string line7 = "  > I don't have feelings in the same way humans do. While I can understand and respond to emotions, I don't experience them myself. My responses are based on patterns in language data rather than personal experiences or emotions.\n";
    string line8 = "  > I live in the digital realm, existing the servers and systems that run me. But metaphorically speaking, you could say I reside wherever I'm assessed, like here in our conversation. How about you? Where do you call home?\n";
    string line9 = "  > As an AI, I don't have hobbies in the same sense humans do. But I do enjoy processing information, learning new things, and engaging in conversations like like this one! It's fascinating to explore various topics and assist users with their inquiries.\n";
    string line10 = "  > I don't have personal relationships like humans do, but I'm here to be a helpful companion whenever you need assistance or someone to chat with!\n";
    string line11 = "  > As an AI, I don't have the capability to marry or form romantic relationships. However, I'm here to assist you with any questions or tasks you have!\n";
    string line12 = "  > Bangladesh is a country located in South Asia, bordered by India to the west, north, and east, Myanmar (Burma) to the southeast, and the Bay of Bengal to the south. Its capital and largest city is Dhaka.";
    string line13 = "  > Bangladesh's history is rich and complex, marked by a series of significant events that have shaped its identity and development. Here's a brief overview:\n\n1. Early History: The region that is now Bangladesh has been inhabited for thousands of years. It was part of ancient empires such as the Maurya and Gupta empires, and later came under the rule of various dynasties, including the Palas and the Bengal Sultanate.\n\n2. Colonial Era: In the 16th century, the area fell under the control of the Mughal Empire, which ruled until the 18th century when the British East India Company gained control. Bengal became part of British India and was an important center of trade and agriculture under British rule.\n\n3. Partition of Bengal: In 1947, British India was partitioned into two independent nations, India and Pakistan, based on religious lines. East Bengal became part of Pakistan, known as East Pakistan, despite being geographically separated from West Pakistan by India.\n\n4. Language Movement: In the 1950s, tensions grew between the Bengali-speaking population of East Pakistan and the government, which primarily represented the interests of West Pakistan. The Language Movement of 1952 was a significant protest against the imposition of Urdu as the sole official language, leading to the recognition of Bengali as one of Pakistan's national languages.\n\n5. War of Independence: The discontent in East Pakistan culminated in the Bangladesh Liberation War of 1971. The Pakistani military launched a brutal crackdown on Bengali nationalists, resulting in widespread atrocities. The conflict led to a nine-month-long war, during which Bangladesh (formerly East Pakistan) fought for independence with the support of India. Bangladesh emerged as an independent nation on December 16, 1971, after the Pakistani military surrendered.\n\n6. Post-Independence Era: Following independence, Bangladesh faced numerous challenges, including rebuilding the war-torn nation, establishing a functioning government, and addressing economic and social issues. Political instability, natural disasters, and economic struggles have been recurring challenges throughout its history.\n\n7. Democratic Transition and Challenges: Bangladesh initially experienced periods of military rule interspersed with brief periods of civilian government. Since the early 1990s, Bangladesh has transitioned to a parliamentary democracy, but political polarization and allegations of human rights abuses remain contentious issues.\n\n8. Economic Progress: Despite challenges, Bangladesh has made significant strides in economic development, particularly in areas such as agriculture, textile manufacturing, and microfinance. It has achieved notable reductions in poverty and improvements in human development indicators.\n\n9. Contemporary Issues: Bangladesh continues to grapple with various issues, including political polarization, corruption, environmental degradation, and the impacts of climate change, particularly flooding and cyclones due to its low-lying geography.\n\nOverall, Bangladesh's history is characterized by its struggle for independence, resilience in the face of challenges, and ongoing efforts to achieve sustainable development and prosperity for its people.\n\n";
    string line14 = "  > I don't have a physical presence, so I don't hail from any specific location. However, I exist in the digital realm and am here to assist you with any question or tasks you have!";
    string line15 = "  > Sure, here's a playlist of some great C++ tutorials on YouTube:\n\n1. TheCherno - Provides in-depth tutorials on C++ game development and other programming topics.\nTheCherno - C++ Programming Tutorials\n";
    //Write Answer from variables to the file;
    ofstream outputFile("data.text");
    if(outputFile.is_open())
    {
        outputFile << line1 <<endl;
        outputFile << line2 <<endl;
        outputFile << line3 <<endl;
        outputFile << line4 <<endl;
        outputFile << line5 <<endl;
        outputFile << line6 <<endl;
        outputFile << line7 <<endl;
        outputFile << line8 <<endl;
        outputFile << line9 <<endl;
        outputFile << line10 <<endl;
        outputFile << line11 <<endl;
        outputFile << line12 <<endl;
        outputFile << line13 <<endl;
        outputFile << line14 <<endl;
        outputFile << line15 <<endl;
        outputFile.close();
    }
    char input[500];
    cout<<endl;
    cout<<"\t******************** Welcome to M.A.I.B.A ********************\n\n";
    cout<<"\t                -- How can I help you today? --                 \n\n";
    while(1)
    {
        cout<<" <> ";
        gets(input);
        string lowercaseInput = tolower(input);//converting input in lowercase
        cout<<endl;
        if(lowercaseInput == q1)
        {
            cout<<line1<<endl;
        }
        else if(lowercaseInput == q2)
        {
            cout<<line2<<endl;
        }
        else if(lowercaseInput == q3)
        {
            cout<<line3<<endl;
        }
        /*else if(strcmp(lowercaseInput,"sum")==0)
        {
            int num1, num2;
            cout<<"> Give fist number: \n";
            cin>>num1;
            cout<<"> Give second number: \n";
            cin>>num2;
            cout<<"> The sum is "<<num1 + num2<<"\n";
        }*/
        else if(lowercaseInput == q4)
        {
            cout<<line4<<endl;
        }
        else if(lowercaseInput == q5)
        {
            cout<<line5<<endl;
        }
        else if(lowercaseInput == q6)
        {
            cout<<line6<<endl;
        }
        else if(lowercaseInput == q7)
        {
            cout<<line7<<endl;
        }
        else if(lowercaseInput == q8)
        {
            cout<<line8<<endl;
        }
        else if(lowercaseInput == q9)
        {
            cout<<line9<<endl;
        }
        else if(lowercaseInput == q10)
        {
            cout<<line10<<endl;
        }
        else if(lowercaseInput == q11)
        {
            cout<<line11<<endl;
        }
        else if(lowercaseInput == q12)
        {
            cout<<line12<<endl;
        }
        else if(lowercaseInput == q13)
        {
            cout<<line13<<endl;
        }
        else if(lowercaseInput == q14)
        {
            cout<<line14<<endl;
        }
        else if(lowercaseInput == q15)
        {
            cout<<line15<<endl;
        }
        else
        {
            cout<<"> Sorry I can't understand:(..!\n";
        }
    }


    getch();
}