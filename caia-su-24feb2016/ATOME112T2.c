#include "dx.h"
void ATOME112T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V9=0,V17=0,V19=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20112;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3617&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l7;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1950])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+8,jvj+9)*/
pile[v[22]]=1182; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+9,jvj+10)*/
if((68!=x[jvj+10])) goto l7;
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1300,R,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==636) goto l7;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=280; pile[WZ1]=jvj+4; 
(*f[1977])( );if(v[102]) goto l2;     /*FNDCND0(280,jvj+4,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+5]=t[x[jvj+5]];
l3:if((x[jvj+5]<=0)) goto l7;
x[jvj+12]=s[x[jvj+5]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+5];
pile[v[22]]=280; pile[WZ1]=jvj+12; 
(*f[1977])( );if(v[102]) goto l4;     /*FNDCND0(280,jvj+12,V9)*/
V9=pile[WZ2]; 
if((V9<=0)) goto l4;
x[jvj+13]=d[20];z[jvj+13]=0;
l5:if((x[jvj+13]<=0)) goto l4;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=R; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(R,jvj+14,V17,jvj+15)*/
V17=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+14,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; pile[WZ3]=jvj+17; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(R,jvj+16,V19,jvj+17)*/
V19=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=jvj+12; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,jvj+12,110,(-656),jvj+23)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(206,715,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3515; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3515,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20112; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,289,218,20112,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
(*f[481])( );     /*STOCKER0(jvj+18)*/
l6:x[jvj+13]=t[x[jvj+13]];
goto l5;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
