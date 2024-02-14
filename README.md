# The-final-project-for-the-Block-Basic-C-constructs-
Create a chat with the following functionality: -console program -user registration - login, password, name -login to the chat using a username /password -sending messages to a specific user -Messaging between all chat users at the same time
I developed the code alone, but consulted with a mentor in a pack.
There are 3 classes created in the code.
Chat is a general class of functions: comparing existing and entered usernames (compareLogin); comparing existing and entered names (compareName); adding a new chat participant (addParticipant); logging into an account (SignIn); logging out of an account (SignOut); sending a message (SendMessage); reading a message (readMessages).
Participants - a class that contains information about the chat participants (login, password, name and messages). The following functions are implemented in the class: adding a new message (recordMessage); reading sent messages (showMessages); setters; getters.
Messages are a class that contains information about the message (sender and text).
