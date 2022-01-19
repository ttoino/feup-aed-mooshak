# [AED 12] The Golden Permit

The Interior Ministry has decided to develop a new more exciting and fairer system for awarding the fabled Golden Resident Permits, whilst also giving less wealthy candidates a possibility of winning. The idea is that candidates for a permit buy lottery tickets which are numbered 1 up to some maximum number. The lottery system then consists of a series of rounds where certain numbers are eliminated or knocked out until only some remain.
The basic idea of the elimination system in the lottery is similar to the old Roman imperial legion system of decimating. Here the system is not quite so brutal, the lottery system consists of simply eliminating every **K**’th ticket and then repeating the process until there are only **K**−1 tickets remaining. These are the winning tickets.\
On a live TV show the elimination factor is announced and then candidates can watch the process evolve over time and see if they win the desired golden resident permit. Of course any system is open to abuse and this is no exception. Your job is, given the right insider information, to advise certain clients what number they should buy.

## Task

You will be given the number **N** of the tickets which are initially ordered 1..**N**. In fact they are arranged logically in a circle so that counting continues in a circular fashion. You are also given the value **K**, the elimination factor. Your job is to calculate the lowest or highest numbered winning ticket.\
The following example for **N**=10 and **K**=3 illustrates the process.\
In the first round the tickets 3,6,9 are eliminated leaving 1 2 4 5 7 8 10\
The next round eliminates 2 and 7 leaving 1 4 5 8 10\
The next round eliminates 1 and 8 leaving 4 5 10.\
The next round eliminates 5 leaving 4 and 10 hence the lowest winning ticket is 4 and the highest winning ticket is 10.

## Input

The input consists of three integer values, on separate lines, namely the number of tickets **N**, the elimination factor **K**, and an integer **M**, zero or one (1 for the lowest ticket and 0 for the highest).

## Output

The output is a line with one integer value. If **M** is 1 the answer is the number of the winning lowest ticket an if **M** is zero the answer is the number of the winning highest ticket.

## Constraints

4 ≤ **N** ≤ 10,000,000\
2 ≤ **K** ≤ 15

## Input Example 1

```
98
11
0
```

## Output Example 1

```
90
```

## Input Example 2

```
9876543
13
1
```

## Output Example 2

```
534335
```
