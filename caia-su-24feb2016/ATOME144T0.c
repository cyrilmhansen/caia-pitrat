#include "dx.h"
void ATOME144T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,K=0,V20=0,V19=0,V5=0,V=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=20144;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3710&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1280)) goto l4;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,L)*/
L=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,R,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+8,K)*/
K=pile[WZ2]; 
if((K==0)) goto l4;
if((K==999)) goto l4;
if((L==2)) goto l1;
if((L>2)) goto l2;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:if((K<0)) goto l2;
goto l4;
l2:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+9,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+10,jvj+3)*/
pile[v[22]]=1347; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1347,jvj+3,jvj+4)*/
goto l4;
l3:V19=abs(K);
pile[v[22]]=V19; pile[WZ1]=L; 
(*f[1006])( );if(v[102]) goto l4;     /*POWER0(V19,L,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+19; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+20)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+20)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+3; pile[WZ1]=R; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[3707])( );if(v[102]) goto l4;     /*CRETROUVERA0(jvj+3,R,jvj+12,jvj+13,V)*/
V=pile[WZ4]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+14,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+23; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+23,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+28)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V20,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3710; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3710,246,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=20144; pile[WZ2]=218; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,20144,218,jvj+27)*/
pile[v[22]]=jvj+28; pile[WZ1]=(-20); pile[WZ2]=jvj+27; pile[WZ3]=159; pile[WZ4]=jvj+29; 
(*f[298])( );     /*TRIENS1(jvj+28,(-20),jvj+27,159,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+29,1,158,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+3; 
(*f[3708])( );     /*CRT0(jvj+15,jvj+3)*/
pile[v[22]]=jvj+16; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+16,1070,68)*/
pile[WZ1]=1569; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+16,1569,67)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+34)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(V20,858,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,v[13],642,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=3710; pile[WZ2]=246; pile[WZ3]=jvj+32; 
(*f[189])( );     /*TRI4(jvj+31,3710,246,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=20144; pile[WZ2]=218; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,20144,218,jvj+33)*/
pile[v[22]]=jvj+34; pile[WZ1]=(-20); pile[WZ2]=jvj+33; pile[WZ3]=159; pile[WZ4]=jvj+35; 
(*f[298])( );     /*TRIENS1(jvj+34,(-20),jvj+33,159,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+35,1,158,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+17)*/
goto l4;
}
