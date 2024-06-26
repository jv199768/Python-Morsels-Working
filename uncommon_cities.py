# Online Python - IDE, Editor, Compiler, Interpreter
'''You want to find people who have as much exposure to different cultures as yourself.

Complete the uncommon_cities helper that takes the cities you have visited (my_cities) and the cities the other person has visited (other_cities) and returns the number of cities that both sequences do NOT have in common.

So given [A B C] and [B C D] it should return 2 because only A and D are different.

You can loop through both sequences but maybe there is a more concise way to do it?'''

def uncommon_cities(my_cities, other_cities):
    uncommon = my_cities.difference(other_cities)
    num_uncommon = len(uncommon)
    return num_uncommon
