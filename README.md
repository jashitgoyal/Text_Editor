//This is a text editor inspired by the popular vi editor

<!-- STEP 1 -->

The Step one was to be able to handle the keypress from the user

<!-- STEP 2 -->

Now its time to make changes to the terminal,the reason is our terminal by default operates in the Canonical Mode,or Cooked Mode.Basically,whenever user type something the text or data is first processed by the terminal i.e understanding special key press like Ctrl+D etc,

However,In Raw Mode the data is send directly to the program ,which provides more customization for programs like games and text editors.

So now we change it to RAW MODE.

<!-- Step 3 -->

Previously we just entered into Raw Mode of the terminal but this time we ,turned of many default flags of the terminal ,the reason behind turning off so many default functionality is so that we can customize things better,
Another thing that we are adding is a read time i.e. if user don't write anything for tooo long it quits by its own

<!-- Step  4-->

Now that we have closed so many default funcitons like Ctrl c ,ctrl z etc,we can customize them.

Reference

1. https://viewsourcecode.org/snaptoken/kilo/index.html ->Its a Full Comprehensive Guide Towards making your own text editor in C
