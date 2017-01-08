Welcome to REALLY BAD POKEMON, where all the pokemon will have
moves that they probably can't learn at all in the original games.

TODO (just in case I left anything out in the individual files):
Implement accuracy and evasion
Implement random move generator
Implement critical hits
Implement status conditions
Implement confusion, flinching
Implement multi-turn moves

Currently, charging attacks such as solarbeam, fly, dig, etc are treated
as 1-turn moves.

Implement effects of certain moves (some moves have unique effects, such as earthquake, hyper beam, etc)
Moves not implemented due to complexity (will need to reconfigure how attacks work to implement them):

Bide (need to implement a damage counter, not attack for 2 turns)
Bind (need to implement a way to prevent other player from attacking when using)
Clamp (need to implement a way to prevent other player from attacking when using)
Confuse Ray (need to implement confusion)
Conversion (need to implement a changeType() function)
Counter (need to implement some damage variable, such as a pointer(?))
Disable (need to implement another variable)
Double Team (need to implement evasion)
Fire Spin (need to implement a way to prevent other player from attacking when using)
Flash (need to implement accuracy)
Focus Energy (need to implement critical chance variable)
Haze (need a resetStages() function)
Kinesis (need to implement accuracy)
Leech Seed (need extra variable)
Light Screen (need to input a counter of sorts)
Low Kick (as I haven't implemented weight as of yet)
Mimic (need a way to get the move the opponent used and modify the moveList vector)
Minimize (need to implement evasion)
Mirror Move (need a way to get the move the opponent used)
Mist (needs a counter and a cantChangeStages variable)
Petal Dance (needs a counter and confusion)
Rage (needs an extra variable to indicate attacked)
Reflect (needs extra variable and counter)
Rest (needs counter)
Roar (needs more than 1 pokemon for this to work)
Sand Attack (needs accuracy stat)



Implement items
Implement 6-pokemon battles
Implement battle menu system (for switching pokemon, using items, etc)