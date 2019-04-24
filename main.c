/*
*****************************************************************************

  File        : main.cpp

  The MIT License (MIT)
  Copyright (c) 2019 STMicroelectronics

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

*****************************************************************************
*/

#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>


pthread_mutex_t mut_saisie = PTHREAD_MUTEX_INITIALIZER;

void* thread_affichage (void* arg);
void* thread_pupitre (void* arg);
void* thread_matrice (void* arg);

jetonPos = 4;
Joueur =1;

int main(void)
{
	pthread_t Thread_aff;
	pthread_t Thread_pup;
	pthread_t Thread_mat;

	pthread_create (&Thread_aff, NULL, thread_affichage, (void*)NULL);
	pthread_create (&Thread_pup, NULL, thread_pupitre, (void*)NULL);
	pthread_create (&Thread_mat, NULL, thread_matrice, (void*)NULL);

	while(1);

	return 0;
}






