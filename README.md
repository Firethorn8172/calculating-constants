# Calculating Constants

This isn't anything big or formal, just some ways to calculate a few famous mathematical constants using C++.

For demos that calculate pi, I have the user enter an integer power of 10 for how many terms to sum since that makes entering larger powers like a million or a billion easier. I didn't do this for e because the factorial breaks it past 66 terms, and I didn't do it for phi since it stops changing value after 48 iterations anyway.

## Methods Used
### Pi
- Monte Carlo
- Gregory-Leibniz Series
- Nilakantha Series
### e
- Taylor Series (e^x at x=1)
### Phi (Golden Ratio)
- Recursive Fraction (phi=1+1/phi)
