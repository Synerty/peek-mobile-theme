.. _app_navigation:

==============
App Navigation
==============

The App Navigation is fixed to the top of the page.

The buttons remain a fixed size throughout a responsive lifecycle.

The buttons on the right of the App Navigation will range from none to many.

The centralized title remains a single line and truncates a :code:`...` if the line
exceeds the minimum screen width.

The title has a fixed width of 40px.

The App Navigation is unique, therefore the classes used will be specific for the
App Navigation.


Class :code:`.peek-app-nav`
---------------------------

The :code:`.peek-app-nav` class will contain the classes specific to the App Navigation.

::

        .peek-app-nav{

          .btn{
          }

          .title{
          }
        }

Looks Classes
-------------

The App Navigation looks classes are found in the :file:`_app_navigation.scss`.

Buttons :code:`.btn`
````````````````````

The :code:`.btn` class dictates the style and size of all the buttons in the Navigation
Bar.  These buttons are unique to the App Navigation.


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

The App Navigation HTML layout classes are found in the :file:`_app_navigation.web.scss`.


NativeScript Layout
```````````````````

The App Navigation NativeScript layout classes are found in the
:file:`_app_navigation.ns.scss`.

.. note:: These layout settings are not required at this time.


Display Sample TODO
--------------

HTML
````

.. image:: /app_navigation/app-nav.web.jpg
  :align: center


NativeScript
````````````

.. image:: /app_navigation/app-nav.ns.jpg
  :align: center
