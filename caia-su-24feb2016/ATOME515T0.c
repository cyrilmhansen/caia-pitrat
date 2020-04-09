#include "dx.h"
void ATOME515T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V10=0,V27=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20515;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3813&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l8;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+2,V27)*/
V27=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1977])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V24; 
(*f[207])( );     /*PLUE2(jvj+3,V24)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l8;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=486)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[1448])( );     /*NONUL0(jvj+14,jvj+15)*/
if((x[jvj+15]==135)) goto l6;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l3:V10=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+3,V10)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+16)*/
x[jvj+38]=x[jvj+12] ;z[jvj+38]=z[jvj+12];
l7:if((x[jvj+38]<=0)) goto l5;
x[jvj+17]=s[x[jvj+38]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+38];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+31]=x[jvj+18] ;z[jvj+31]=z[jvj+18];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+21)*/
pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+27; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+27,jvj+22)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,jvj+16,103,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+23)*/
pile[WZ2]=111; pile[WZ3]=jvj+21; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+21,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+23)*/
pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+19,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+36; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+36)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V27,858,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,v[13],642,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=3813; pile[WZ2]=246; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,3813,246,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=20515; pile[WZ2]=218; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,20515,218,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=(-20); pile[WZ2]=jvj+35; pile[WZ3]=159; pile[WZ4]=jvj+37; 
(*f[298])( );     /*TRIENS1(jvj+36,(-20),jvj+35,159,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+37,1,158,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1298])( );     /*NOUVCONTR0(jvj+19,jvj+20)*/
x[jvj+38]=t[x[jvj+38]];
goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
