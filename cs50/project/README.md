# CENTRALIZE AND ANALYZE
#### Video Demo: https://youtu.be
#### Description:
chess.com is the most famous chess website out there.
but there is a slight problem with it, whenever you click to begin gameplay, the chessboard is not placed in centre.
its in the left side of screen. maybe this was done so that it would be easy for streamers to read chat while playing chess but for normal users it feels like waste of space on webpage.
My extension have 2 scripts, one which works all the time and one which activates when the action button is clicked.
script1 background.js:
whenever the website is chess.com with https, the action of this script is activated which is the button.
extension's action button is disabled by default when its installed but its enabled when its on chess.com website.
when user clicks the extension button, the variables reset and are set to NULL . then the value of pgn result is set by executing another function called getpgn. pgn is basically is the information of every move made by user. its full form is portable game notation.  getpgn verifies the color of the player and then gets all the pgn from text field named pgn. then this pgn data is inserted into lichess.org/paste as lichess allows analisation for free on this url. the return value of getpgn is then given to this new lichess tab and therefore it understands which player's turn it was and what moves were played using .listener. as a corner case, if there is any previous .listeners available, they are removed and new data is added. the function fillpgn is used to fill in the .listener.

set analysis option sets us up the lichess page as if the user was white, if not white, then its set up like it was played by black. waitforelm waits for selector to appear in dom and then executres the remaning function.
timeout is used as to not get banned by lichess by sending alot of requests, so it allows some cooldown period and also it waits for all necessary elements to be loaded and it gives some timeout and wont proceed without them .

script2  script.js:
first, we get the board element from document which we need to centre. we get the board coordinates using .getboundingclientrect() fn and get the left distance from it then the value of board without any padding is to be found. then the screenwidth of user is found using body.offsetwidth. then finally the padding style of left is changed such that the board comes in centre.

resize observer monitors the size of the parameters given to it. here resize observer is bound to centre function so that whenever sidebar or the size of board changes, centre functionis called. sometimes sidebar glitches out and wont be able to automatically resize so whenever sidebar is found in html, its manually set to 100 percent of its width.

i was inpired by some old extensions which used similar logics but were not able to properly resize as if you could just resize them a lil bit and the board will start malfunctioning completely or were totally seperate entities. like they would either just analyze of just recentre. even in the analization, they didnt consider timeouts and used to get banned by lichess for very quick requests before the webpage even loaded.
This was cs50!!








