#!/usr/bin/env python3

input_file = "../datafile.txt"
output_file = "../python3_outfile.txt"


lineCount = 0
with open(output_file, 'w') as outfile, open(input_file, 'r', encoding='utf-8') as infile:
    outfile.write("Student: Your Name\n")
    for line in infile:
        lineCount += 1
        count_a = 0
        count_b = 0
        count_c = 0
        count_d = 0
        count_e = 0
        count_f = 0
        count_g = 0
        count_h = 0
        count_i = 0
        count_j = 0
        count_k = 0
        for char in line:
            if char == "a" or char == "A":
                count_a += 1
            if char == "b" or char == "B":
                count_b += 1
            if char == "c" or char == "C":
                count_c += 1
            if char == "d" or char == "D":
                count_d += 1
            if char == "e" or char == "E":
                count_e += 1
            if char == "f" or char == "F":
                count_f += 1
            if char == "g" or char == "G":
                count_g += 1
            if char == "h" or char == "H":
                count_h += 1
            if char == "i" or char == "I":
                count_i += 1
            if char == "j" or char == "J":
                count_j += 1
            if char == "k" or char == "K":
                count_k += 1

        outfile.write("--------------------------------------------------------------------------\n")
        outfile.write("Line " + str( lineCount ) + ":\n")
        outfile.write( "A\t"
            + "B\t"
            + "C\t"
            + "D\t"
            + "E\t"
            + "F\t"
            + "G\t"
            + "H\t"
            + "I\t"
            + "J\t"
            + "K\t\n"
        )
        outfile.write( str(count_a ) + "\t")
        outfile.write( str(count_b) + "\t")
        outfile.write( str(count_c ) + "\t")
        outfile.write( str(count_d ) + "\t")
        outfile.write( str(count_e ) + "\t")
        outfile.write( str(count_f ) + "\t")
        outfile.write( str(count_g ) + "\t")
        outfile.write( str(count_h ) + "\t")
        outfile.write( str(count_i ) + "\t")
        outfile.write( str(count_h ) + "\t")
        outfile.write( str(count_k ) + "\t\n")
        outfile.write("--------------------------------------------------------------------------\n\n")