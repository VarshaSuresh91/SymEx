void main()
{
	int grant1;
	int grant2;
	int light;

	int cstate1;
	int cstate2;
	int p0;
	int p1;
	int t1;
	
	cstate1 = 0;
	cstate2 = 0;

	int check1;
	int check2;
	int check20;
	int check21;
	while(1)
	{
		int x = input();
		int y = input();
		int error = input();
		
		check1 = x + y;

		if(check1>3)
		{
			p0 = 1;
		}
		else
		{
			p0 = 0;
		}

		check20 = x * x;
		check21 = y * y;
		check2 = check20 + check21;
		if(check2 < 4)
		{
			p1 = 1;
		}
		else
		{
			p1 = 0;
		}

		if (cstate1 == 0)
		{
			if((p0==1)&&(p1==0))
			{
				cstate1 = 9;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==0)&&(p1==0))
			{
				cstate1 = 0;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==0)&&(p1==1))
			{
				cstate1 = 7;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==1)&&(p1==1))
			{
				cstate1 = 11;
				grant1 = 1;
				grant2 = 0;
			}
			else{}
		}

		else if (cstate1 == 7)
		{
			if((p0==1)&&(p1==0))
			{
				cstate1 = 9;
				grant1 = 0;
				grant2 = 1;
			}
			else if((p0==0)&&(p1==0))
			{
				cstate1 = 0;
				grant1 = 0;
				grant2 = 1;
			}
			else if((p0==0)&&(p1==1))
			{
				cstate1 = 7;
				grant1 = 0;
				grant2 = 1;
			}
			else if((p0==1)&&(p1==1))
			{
				cstate1 = 11;
				grant1 = 1;
				grant2 = 0;
			}
			else{}

		}

		else if (cstate1 == 9)
		{
			if((p0==1)&&(p1==0))
			{
				cstate1 = 9;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==0)&&(p1==0))
			{
				cstate1 = 0;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==0)&&(p1==1))
			{
				cstate1 = 7;
				grant1 = 1;
				grant2 = 0;
			}
			else if((p0==1)&&(p1==1))
			{
				cstate1 = 11;
				grant1 = 1;
				grant2 = 0;
			}
			else
			{
				cstate1 = 11;
				grant1 = 1;
				grant2 = 0;
			}

		}
		else
		{
		}

		if(cstate2 == 0)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else
			{
				cstate2 = 6;
				light = 0;
			}
		}
		if(cstate2 == 43)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else
			{
				cstate2 = 43;
				light = 0;
			}
		}
		if(cstate2 == 6)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else
			{
				cstate2 = 6;
				light = 0;
			}
		}
		if(cstate2 == 396)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else if((error == 0)&&(t1 == 0))
			{
				cstate2 = 396;
				light = 1;
			}
			else if((error == 0)&&(t1 == 1))
			{
				cstate2 = 43;
				light = 0;
			}
			else
			{
				
			}
		}
		if(cstate2 == 81)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else if((error == 0)&&(t1 == 0))
			{
				cstate2 = 396;
				light = 1;
			}
			else if((error == 0)&&(t1 == 1))
			{
				cstate2 = 43;
				light = 0;
			}
			else
			{
				
			}
		}
		if(cstate2 == 12)
		{
			if(error == 1)
			{
				cstate2 = 12;
				light = 1;
			}
			else if((error == 0)&&(t1 == 0))
			{
				cstate2 = 81;
				light = 1;
			}
			else if((error == 0)&&(t1 == 1))
			{
				cstate2 = 6;
				light = 0;
			}
			else
			{
				
			}
		}

	}

}