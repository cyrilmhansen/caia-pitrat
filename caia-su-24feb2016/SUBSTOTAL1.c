#include "dx.h"
void SUBSTOTAL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,EZ,E;
int RR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=11363;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1590&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; EZ=pile[v[22]+1]; E=pile[v[22]+2]; RR=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[R] ;z[jvj+9]=z[R];
l7:x[jvj+13]=x[EZ] ;z[jvj+13]=z[EZ];
l5:if((x[jvj+13]>0)) goto l6;
if((v[244]!=0)) goto l9;
pile[v[22]]=300; pile[WZ1]=jvj+9; pile[WZ2]=RR; 
(*f[1159])( );if(v[102]) goto l9;     /*NORME1(300,jvj+9,RR)*/
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+3]=s[x[jvj+12]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+12];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l4;
pile[v[22]]=447; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(447,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+4,jvj+6)*/
if((x[jvj+6]==135)) goto l8;
l4:x[jvj+12]=t[x[jvj+12]];
l1:if((x[jvj+12]>0)) goto l2;
x[jvj+14]=x[jvj+11] ;z[jvj+14]=z[jvj+11];
pile[v[22]]=E; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(E,jvj+7)*/
x[jvj+9]=x[jvj+14] ;z[jvj+9]=z[jvj+14];
goto l7;
l6:x[jvj+7]=s[x[jvj+13]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+13];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l8;
pile[v[22]]=447; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+7,jvj+8)*/
pile[v[22]]=459; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+7,jvj+5)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+5,jvj+10)*/
if((x[jvj+10]==135)) goto l12;
pile[WZ2]=jvj+9; pile[WZ3]=jvj+11; 
(*f[1591])( );     /*SUBSTITUTION0(jvj+8,jvj+5,jvj+9,jvj+11)*/
l3:x[jvj+12]=x[EZ] ;z[jvj+12]=z[EZ];
goto l1;
l8:x[jvj+13]=t[x[jvj+13]];
goto l5;
l9:if((v[244]<=0)) goto l10;
pile[v[22]]=jvj+9; pile[WZ1]=RR; 
(*f[965])( );if(v[102]) goto l10;     /*NORM0(jvj+9,RR)*/
goto l11;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l12:x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
goto l3;
}
