#!/usr/bin/perl

foreach (1 .. 10000000) {
    $car = int(rand(3));
    if ($car == 1) {
        $g1Count++;
    } else {
        $g2Count++;
    }
}

print "Guess 1 Count: $g1Count\n";
print "Guess 2 Count: $g2Count\n";
