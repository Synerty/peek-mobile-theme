.. _navigation_bar:

==============
Navigation Bar TODO
==============

The Navigation Bar is fixed to the top of the page.

The buttons remain a fixed size throughout a responsive lifecycle.

The centralized title remains a single line and truncates a :code:`...` if the line
exceeds the minimum screen width.

The title has a fixed width of 40px.

The Navigation Bar is unique, therefore the classes used will be specific for the
Navigation Bar.


Class :code:`.peek-nav-bar`
---------------------------

The :code:`.peek-nav-bar` class will contain the classes specific to the Navigation Bar.

navbar navbar-default navbar-fixed-top


Looks Classes
-------------

The looks classes are found in the :file:`_navigation.css`.

Buttons :code:`.btn`
````````````````````

The :code:`.btn` class dictates the style and size of all the buttons in the Navigation
Bar.  These buttons are unique to the Navigation Bar.

Title :code:`.title`
````````````````````

The :code:`.title`


Web Layout TODO
----------

The web layout classes are found in the :file:`_navigation.web.css`.



NativeScript Layout TODO
-------------------

The NativeScript layout classes are found in the :file:`_navigation.ns.css`.


Display Sample TODO
--------------

Web:

.. image:: /navigation_bar/nav-bar.web.jpg
  :align: center

NativeScript:

.. image:: /navigation_bar/nav-bar.ns.jpg
  :align: center


Code Sample TODO
-----------

Web:

::

        <div class="peek-nav-bar" [class.bg-danger]="!vortexIsOnline">
          <button class="navbar-left btn"
                  [routerLink]="['/']">
            Home

          </button>
          <div class="title">
            {{title}}

          </div>
          <button class="navbar-right btn"
                  *ngFor="let link of rightLinks"
                  [routerLink]="[link.resourcePath]">
            {{linkTitle(link)}}

          </button>
        </div>


NativeScript:

::

        <GridLayout rows="auto" columns="auto, *, auto"
                    [class.bg-danger]="!vortexIsOnline">

          <Button class="btn" col="0" row="0"
                  text="Home" [nsRouterLink]="['/']">

          </Button>

          <Label class="title"
                 col="1" row="0"
                 [text]="title">

          </Label>

          <Button class="btn"
                  *ngFor="let link of rightLinks"
                  col="2" row="0"
                  [text]="linkTitle(link)"
                  [nsRouterLink]="[link.resourcePath]">

          </Button>
        </GridLayout>
