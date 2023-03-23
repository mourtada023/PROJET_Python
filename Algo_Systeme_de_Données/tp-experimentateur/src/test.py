# -*- coding: utf-8 -*-

"""
:mod:`test` module : test module for experiences assignment

:author: `FIL - IEEA - Univ. Lille1.fr <http://portail.fil.univ-lille1.fr>`_

:date: 2018, january
"""
import sys
import experience
import marker
from functools import cmp_to_key
from sorting import *
cpt = 0

def compare (m1,m2):
    '''
    Compares two markers

    :param m1: A marker 
    :type m1: Marker
    :param m2: Another marker
    :type m2: Marker
    :return: -1 if *m1 < m2*, 0 if *m1* = *m2* or 1 when *m1* > *m2*
    :rtype: int
    '''
    global cpt
    cpt +=1
    return m1.cmp(m2)

# STRATEGY 1
def negative_markers1(markers,positive):
    """
    Computes the list of negative markers from the list of markers and
    the list of positive markers.

    :param markers: The list of markers 
    :type markers: list of Marker
    :param positive: The list of positive markers
    :type positive: list of Marker
    :return: The list of negative markers
    :rtype: list of Marker
    """
    negative = []
    i=0
    while(i < len(markers)):
        m = markers[i]
        isNegative = True
        j=0
        while(j < len(positive) and isNegative):
            p = positive[j]
            if not compare(m,p):
                isNegative = False
            j+=1
        if (isNegative): negative.append(m)
        i+=1
    return negative

# STRATEGY 2
def negative_markers2(markers,positive):
    negative = []
    # Trier `positive` grâce au module sorting, qui vous est fourni (pensez à l'importer)
    # importee au debut du fichier 
    i=0
    found = False
    positive = merge_sort(positive,compare)
    while( i < len(markers)):
        m = markers[i]
        minpos = 0
        maxpos = len(positive)-1
        found = False
        while (minpos <= maxpos and not found):
            middle = (minpos + maxpos) // 2
            p = positive[middle]
            c = compare(m,p) 
            if not c : found = True
            elif c < 0 : maxpos = middle - 1
            else: minpos = middle+1     # execucted when c > 0 in other words, m > p
        if (not found):
            negative.append(m)
        i+=1
    return negative

# STRATEGY 3
def negative_markers3(markers,positive):
    negative = []
    i=0
    found = False
    positive = merge_sort(positive,compare)
    markers = merge_sort(markers,compare)
    markers = merge(positive,markers,compare)
    while( i < len(markers) - 1):
        if (not compare(markers[i],markers[i+1])):
            i+=1
        else:
            negative.append(markers[i])
        i+=1
    return negative
      
if __name__ == "__main__":
    if (len(sys.argv) < 2):
        print("Need for a paramater <m>, number of markers")
        exit()
    m = int(sys.argv[1])
    assert (m > 0), "The number of markers must be greater than 0"
    f = open('.dat/tp-' + str(m) + ".dat", 'w+')
    sys.stdout = f
    for i in range(1,m+1):
        exp = experience.Experience(i,m)
        markers = exp.get_markers()
        positive = exp.get_positive_markers()
        cpt = 0
        negative_markers1(markers,positive)
        cpt1 = cpt
        cpt = 0
        negative_markers2(markers,positive)
        cpt2 = cpt
        cpt = 0
        negative_markers3(markers,positive)
        cpt3 = cpt
        print(i,i,cpt1,cpt2,cpt3)
