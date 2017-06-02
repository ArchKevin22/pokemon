#Welcome to Pokemon Labs.

In the region of Kanto, Professor Oak has discovered a method to make any pokemon learn any move!
This groundbreaking discovery has lead to Pokemon learning moves they couldn't dream of learning.
Has science gone too far? Let's find out.

You can currently battle the computer with a randomly generated pokemon or view the pokedex.

There currently exists a pool of 30 moves for the pokemon to learn from.

##TODO (just in case I left anything out in the individual files):


* Implement graphics (top priority)
* Implement accuracy and evasion
* Implement random move generator
* Implement critical hits
* Implement status conditions
* Implement charging moves
* Implement effects of certain moves (some moves have unique effects, such as earthquake, hyper beam, etc)

##Moves not implemented yet:

* Bide (need to implement a damage counter, not attack for 2 turns)
* Bind (need to implement a way to prevent other player from attacking when using)
* Clamp (need to implement a way to prevent other player from attacking when using)
* Confuse Ray
* Conversion (need to implement a changeType() function)
* Counter (need to implement some damage variable, such as a pointer(?))
* Disable (need to implement another variable)
* Double Team (need to implement evasion)
* Fire Spin (need to implement a way to prevent other player from attacking when using)
* Flash (need to implement accuracy)
* Focus Energy (need to implement critical chance variable)
* Haze (need a resetStages() function)
* Kinesis (need to implement accuracy)
* Leech Seed (need extra variable)
* Light Screen (need to input a counter of sorts)
* Low Kick (as I haven't implemented weight as of yet)
* Mimic (need a way to get the move the opponent used and modify the moveList vector)
* Minimize (need to implement evasion)
* Mirror Move (need a way to get the move the opponent used)
* Mist (needs a counter and a cantChangeStages variable)
* Petal Dance (needs a counter and confusion)
* Rage (needs an extra variable to indicate attacked)
* Reflect (needs extra variable and counter)
* Rest (needs counter)
* Roar (needs more than 1 pokemon for this to work)
* Sand Attack (needs accuracy stat)
* Smokescreen (accuracy stat)
* Substitute (needs a way to represent the substitute)
* Supersonic (confusion)
* Teleport (will not implement unless I implement battles with wild pokemon)
* Toxic (need to implement badly poisoned, unique move)
* Transform (yay copy constructors)
* Whirlwind (needs multi-pokemon battle)
* Wrap (trapping pokemon)
* Implement items
* Implement 6-pokemon battles
* Implement battle menu system (for switching pokemon, using items, etc)

Temp may or may not have a memory leak, looking into that.
