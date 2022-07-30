/* #include <get_plot.c>
*
* Creada por: Ing. Abiezer Hernandez O.
* Fecha de creacion: 20/07/2020
* Electronica y Circuitos
*
*/

void read_substring_plot(char* cp, char* vc, int inc , int fn)
{
   int pt = 0;
   for(int lt=inc; lt<=fn; lt++)
   {
      vc[pt] = cp[lt];
      pt++;
   }
   vc[pt] = '\0';
   pt = 0;
}

void read_plot(char b_ini, char b_fin, char* tr_or, char* n_str, int s_buf)
{
   int i = 0;
   int j = 0;
   int conta_ini = 0;
   int conta_fin = 0;
   
   for(i=0; i<s_buf; i++)
   {
      if(tr_or[i] == b_ini){
         conta_ini = i;
      }
   }
   for(j=0; j<s_buf; j++)
   {
      if(tr_or[j] == b_fin){
         conta_fin = j;
      }
   }
   read_substring_plot(tr_or, n_str, conta_ini+1, conta_fin-1);
}