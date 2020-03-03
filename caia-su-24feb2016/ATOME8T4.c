#include "dx.h"
void ATOME8T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,H=0;
int RR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=20008;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3165&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,RR,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l5;
pile[v[22]]=869; pile[WZ1]=RR; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(869,RR,jvj+5)*/
if((x[jvj+5]!=769)) goto l5;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1274,RR,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l5;
l4:pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,RR,H)*/
H=pile[WZ2]; 
x[jvj+7]=incon;
if((H<3)) goto l5;
if((H<=4)) goto l1;
if((H==5)) goto l2;
if((H==6)) goto l3;
if((H!=7)) goto l5;
x[jvj+7]=606 ;z[jvj+7]=606;
l6:pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+12)*/
pile[v[22]]=jvj+7; pile[WZ1]=715; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,715,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+9; 
(*f[189])( );     /*TRI4(jvj+8,v[13],642,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=3164; pile[WZ2]=246; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,3164,246,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=20008; pile[WZ2]=218; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+10,20008,218,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=(-20); pile[WZ2]=jvj+11; pile[WZ3]=159; pile[WZ4]=jvj+13; 
(*f[298])( );     /*TRIENS1(jvj+12,(-20),jvj+11,159,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=187; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+13,187,158,jvj+6)*/
pile[v[22]]=jvj+6; 
(*f[481])( );     /*STOCKER0(jvj+6)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+7]=206 ;z[jvj+7]=206;
goto l6;
l2:x[jvj+7]=604 ;z[jvj+7]=604;
goto l6;
l3:x[jvj+7]=605 ;z[jvj+7]=605;
goto l6;
}
