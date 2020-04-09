#include "dx.h"
void ATOME236T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V26=0,V16=0,N=0,I=0,V38=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=33;
x[jvj+1]=20236;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3575&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l6;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+4,V34)*/
V34=pile[WZ2]; 
x[jvj+5]=d[20];z[jvj+5]=0;
l1:if((x[jvj+5]<=0)) goto l6;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+6,R,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=636)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+11,V26)*/
V26=pile[WZ2]; 
if((V26!=1)) goto l2;
x[jvj+12]=d[20];z[jvj+12]=0;
l3:if((x[jvj+12]<=0)) goto l2;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+13,jvj+7,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l4;
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+13,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+16,jvj+7,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+17,V16)*/
V16=pile[WZ2]; 
N=V16;
pile[v[22]]=N; pile[WZ1]=jvj+18; 
(*f[992])( );if(v[102]) goto l4;     /*FACTPREM0(N,jvj+18)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+14,jvj+19)*/
V38=x[jvj+18];
l5:if((V38<=0)) goto l4;
I=s[V38];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[v[22]]=V34; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V34,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3575; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3575,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20236; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20236,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+32)*/
pile[WZ3]=0; pile[WZ4]=jvj+28; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=160; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,160,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=111; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+33; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+33,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+20; 
(*f[1298])( );     /*NOUVCONTR0(jvj+21,jvj+20)*/
V38=t[V38];
goto l5;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+12]=t[x[jvj+12]];
goto l3;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
