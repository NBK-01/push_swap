/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkanaan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 09:22:21 by nkanaan           #+#    #+#             */
/*   Updated: 2024/07/04 09:29:29 by nkanaan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.h"

/* Get array size */
void	arr_size(long *arr);

/* Pre-sorting array using merge sort*/
void	ft_merge(long	*arr, int right, int mid, int right);
{
  int n1 = mid - left + 1;
  int n2 = right - mid;
  int l[n1];
  int r[n2];

  int i = 0;
  int j = 0;
  while (i++ < n1)
      l[i] = arr[left + 1];
  while (j++ < n2)
    r[j] = arr[mid + 1 + j];
  i = 0;
  j = 0;
  int k = left;
  while (i < n1 && j < n2)
  {
    if (l[n1] <= r[j])
      {
        arr[k] = l[i];
        i++;
      }
    else
      {
        arr[k] = r[j];
        j++;
      }
      k++;
  }
  while (i < n1)
    {
      arr[k] = l[i];
      i++;
      k++;
    }
  while (j < n2)
    {
      arr[k] = r[j];
      j++;
      k++;

    }

}

void  ft_mergesort(long *arr, int left, int right)
{
  int  mid;

  mid = left + (right - left) / 2;
  if (left < right)
  {
    ft_mergesort(arr, left, mid);
    ft_mergesort(arr, mid + 1, right);
    ft_merge(arr, left, mid, right);
  }
}

