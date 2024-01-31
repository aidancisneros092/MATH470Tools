#include <string>
#include <iostream>
using namespace std;

void Letter_freq_analysis(string inputtext){
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int iletter = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t = 0;
    int u = 0;
    int v = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;

    for(int i = 0; i < inputtext.length(); i++){
        //cout << "Checking " <<inputtext.at(i)<<endl;
        if(inputtext.at(i) == 'a' || inputtext.at(i) == 'A'){a++;}
        else if(inputtext.at(i) == 'b' || inputtext.at(i) == 'B'){b++;}
        else if(inputtext.at(i) == 'c' || inputtext.at(i) == 'C'){c++;}
        else if(inputtext.at(i) == 'd' || inputtext.at(i) == 'D'){d++;}
        else if(inputtext.at(i) == 'e' || inputtext.at(i) == 'E'){e++;}
        else if(inputtext.at(i) == 'f' || inputtext.at(i) == 'F'){f++;}
        else if(inputtext.at(i) == 'g' || inputtext.at(i) == 'G'){g++;}
        else if(inputtext.at(i) == 'h' || inputtext.at(i) == 'H'){h++;}
        else if(inputtext.at(i) == 'i' || inputtext.at(i) == 'I'){iletter++;}
        else if(inputtext.at(i) == 'j' || inputtext.at(i) == 'J'){j++;}
        else if(inputtext.at(i) == 'k' || inputtext.at(i) == 'K'){k++;}
        else if(inputtext.at(i) == 'l' || inputtext.at(i) == 'L'){l++;}
        else if(inputtext.at(i) == 'm' || inputtext.at(i) == 'M'){m++;}
        else if(inputtext.at(i) == 'n' || inputtext.at(i) == 'N'){n++;}
        else if(inputtext.at(i) == 'o' || inputtext.at(i) == 'O'){o++;}
        else if(inputtext.at(i) == 'p' || inputtext.at(i) == 'P'){p++;}
        else if(inputtext.at(i) == 'q' || inputtext.at(i) == 'Q'){q++;}
        else if(inputtext.at(i) == 'r' || inputtext.at(i) == 'R'){r++;}
        else if(inputtext.at(i) == 's' || inputtext.at(i) == 'S'){s++;}
        else if(inputtext.at(i) == 't' || inputtext.at(i) == 'T'){t++;}
        else if(inputtext.at(i) == 'u' || inputtext.at(i) == 'U'){u++;}
        else if(inputtext.at(i) == 'v' || inputtext.at(i) == 'V'){v++;}
        else if(inputtext.at(i) == 'w' || inputtext.at(i) == 'W'){w++;}
        else if(inputtext.at(i) == 'x' || inputtext.at(i) == 'X'){x++;}
        else if(inputtext.at(i) == 'y' || inputtext.at(i) == 'Y'){y++;}
        else if(inputtext.at(i) == 'z' || inputtext.at(i) == 'Z'){z++;}
    }
    cout << "A: " << ((double)a/(double)inputtext.length()) <<" "<<"B: " << ((double)b/inputtext.length()) <<" "<<"C: " << ((double)c/inputtext.length()) <<" "<<"D: " << ((double)d/inputtext.length())
    <<" "<<"E: " << ((double)e/inputtext.length()) <<" "<<"F: " << ((double)f/inputtext.length()) <<" "<<"G: " << ((double)g/inputtext.length()) <<" "<<"H: " << ((double)h/inputtext.length()) <<" "<<
    "I: " << ((double)iletter/inputtext.length()) <<" "<<"J: " << ((double)j/inputtext.length()) <<" "<<"K: " << ((double)k/inputtext.length()) <<" "<<"L: " << ((double)l/inputtext.length()) <<" "<<
    "M: " << ((double)m/inputtext.length()) <<endl<<"N: " << ((double)n/inputtext.length()) <<" "<<"O: " << ((double)o/inputtext.length()) <<" "<<"P: " << ((double)p/inputtext.length()) <<" "<<
    "Q: " << ((double)q/inputtext.length()) <<" "<<"R: " << ((double)r/inputtext.length()) <<" "<<"S: " << ((double)s/inputtext.length()) <<" "<<"T: " << ((double)t/inputtext.length()) <<" "<<
    "U: " << ((double)u/inputtext.length()) <<" "<<"V: " << ((double)v/inputtext.length()) <<" "<<"W: " << ((double)w/inputtext.length()) <<" "<<"X: " << ((double)x/inputtext.length()) <<" "<<
    "Y: " << ((double)y/inputtext.length()) <<" "<<"Z: " << ((double)z/inputtext.length()) <<endl;
}
int main(){
    string text= "alpthvwxlweuvvxhvjdtjvpidvtiprrglufxyioapxealqzglxsputpchroehtpgalpbhmyrsedhpglajmawlvenwidpyieghrdevwtipsyrptstywhwpgsglecghrrtalpdyhpgvjwtaxpgzmyptidhhkppuhdjiwexayexvrnxwlpgzasxjldnzxpbhxtrhpwnyiaahgpalxetywzgnvzjwwzusieilvdlpxsdalpgsieilvddykcdbtddmppiaichicctwplrprrthgsalxetyatioxstvrpuvpwddmyvpxtcalppstspiiehpqaalzpgzmzczsqtpxstysqulvpssmeisindujtslrexhptifeyszxtashzcvxlclecafwfqzxtibxtdugteoiclhwewlgltzecrptstymylomnwlenwsieilvtcalpesetcaiiidedgltwpjioqfewtaxpgzsxtmmitkrfbiicdmtzhpxtduwqjyxstyhzluxsthpawhfpipxhpzrlblhluaicybptjzgltzeclosthyiadyxpsasspcifhlhtidmewhwsxmxzualctlxzrvqxjumnpaihxalsxzkpclvlazhfgprrwpwxxsmepycnpttlxnrd";

    string every1st="";
    string every2nd="";
    string every3rd="";
    string every4th="";

    int list = 0;
    for(int i=0; i < text.length();i++){
        if(list == 0){
            every1st+= text.at(i);
            list++;
        }
        else if(list == 1){
            every2nd+= text.at(i);
            list++;
        }
        else if(list == 2){
            every3rd+= text.at(i);
            list++;
        }
        else if(list == 3){
            every4th+= text.at(i);
            list=0;
        }
        
    }
    cout << "1st list: "<<every1st << endl;
    cout << "2nd list: "<<every2nd << endl;
    cout << "3rd list: "<<every3rd << endl;
    cout << "4th list: "<<every4th << endl;

    cout << "1st frequencies: " << endl;
    Letter_freq_analysis(every1st);
    cout << "2nd frequencies: " << endl;
    Letter_freq_analysis(every2nd);
    cout << "3rd frequencies: " << endl;
    Letter_freq_analysis(every3rd);
    cout << "4th frequencies: " << endl;
    Letter_freq_analysis(every4th);
}