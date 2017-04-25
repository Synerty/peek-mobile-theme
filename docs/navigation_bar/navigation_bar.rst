.. _navigation_bar:

==============
Navigation Bar
==============

The Navigation Bar is fixed to the top of the page.

The buttons remain a fixed size throughout a responsive lifecycle.

The buttons on the right of the Navigation Bar will range from none to many.

The centralized title remains a single line and truncates a :code:`...` if the line
exceeds the minimum screen width.

The title has a fixed width of 40px.

The Navigation Bar is unique, therefore the classes used will be specific for the
Navigation Bar.


Class :code:`.peek-nav-bar`
---------------------------

The :code:`.peek-nav-bar` class will contain the classes specific to the Navigation Bar.

::

        .peek-nav-bar{

          .btn{
          }

          .title{
          }
        }

Looks Classes
-------------

The Navigation Bar looks classes are found in the :file:`_navigation.scss`.

Buttons :code:`.btn`
````````````````````

The :code:`.btn` class dictates the style and size of all the buttons in the Navigation
Bar.  These buttons are unique to the Navigation Bar.


Examples
~~~~~~~~

HTML: ::

        <button class="btn"
                [routerLink]="['/']">
            Home

        </button>


NativeScript: ::

        <Button class="btn"
                col="0" row="0"
                text="Home"
                [nsRouterLink]="['/']">

        </Button>


Title :code:`.title`
````````````````````

The :code:`.title` class styles the dynamic title.


Examples
~~~~~~~~

HTML: ::

        <div class="title">
            {{title}}
        </div>


NativeScript: ::

        <Label class="title"
               col="1" row="0"
               [text]="title">

        </Label>


Layout
------


HTML Layout
```````````

The Navigation Bar HTML layout classes are found in the :file:`_navigation.web.scss`.


NativeScript Layout
```````````````````

The Navigation Bar NativeScript layout classes are found in the
:file:`_navigation.ns.scss`.

.. note:: These layout settings are not required at this time.


Display Sample TODO
--------------

HTML
````

.. image:: /navigation_bar/nav-bar.web.jpg
  :align: center


NativeScript
````````````

.. image:: /navigation_bar/nav-bar.ns.jpg
  :align: center
