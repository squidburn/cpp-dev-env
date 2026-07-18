#include "hpMath.h"
#include <algorithm>
#include <vector>

// 高精度乘法
std::string hpMul(std::string a,std::string b) {
    std::reverse(a.begin(),a.end());
    std::reverse(b.begin(),b.end());
    if(a[0]=='0'||b[0]=='0') return "0";
    std::vector<int> c(a.length()+b.length(),0);
    for(int i=0; i<a.length(); i++) {
        for(int j=0; j<b.length(); j++) {
            c[i+j]+=(a[i]-'0')*(b[j]-'0');
        }
    }
    for(int i=0; i<c.size(); i++) {
        if(c[i]>=10) {
            c[i+1]+=c[i]/10;
            c[i]%=10;
        }
    }
    std::reverse(c.begin(),c.end());
    int idx=0;
    while(c[idx]==0) idx++;
    std::string result="";
    for(; idx<c.size(); idx++) {
        result+=std::to_string(c[idx]);
    }
    return result;
}

// 高精度加法
std::string hpAdd(std::string a,std::string b) {
    if(a.length()<b.length()) {
        swap(a,b);
    }

    std::reverse(a.begin(),a.end());
    std::reverse(b.begin(),b.end());

    std::vector<int> c(a.length()+1,0);
    for(int i=0; i<a.length(); i++) {
        c[i]=(a[i]-'0')+(i<b.length() ? (b[i]-'0') : 0);
    }
    for(int i=0; i<c.size()-1; i++) {
        if(c[i]>=10) {
            c[i+1]+=c[i]/10;
            c[i]=c[i]%10;
        }
    }
    std::reverse(c.begin(),c.end());
    int idx=0;
    while(idx<c.size()-1&&c[idx]==0) {
        idx++;
    }
    std::string result="";
    for(; idx<c.size(); idx++) {
        result+=std::to_string(c[idx]);
    }
    return result;
}
