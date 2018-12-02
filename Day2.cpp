#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
meal_cost=float(input ())
tip_percent=float(input ())
tax_percent=float(input ())
tip=meal_cost*(tip_percent/100)
tax=meal_cost*(tax_percent/100)
total_cost=meal_cost+tip+tax
print(int(round(total_cost,0)))
        


