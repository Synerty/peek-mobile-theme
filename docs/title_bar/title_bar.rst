.. _title_bar:

=========
Title Bar
=========

The Title Bar is fixed to the top of the page.

The buttons remain a fixed size throughout a responsive lifecycle.

The buttons on the right of the Title Bar will range from none to many.

The centralized title remains a single line and truncates a :code:`...` if the line
exceeds the minimum screen width.

The title has a fixed width of 40px.

The Title Bar is unique, therefore the classes used will be specific for the
Title Bar.


Class :code:`.peek-title-bar`
-----------------------------

The :code:`.peek-title-bar` class will contain the classes specific to the Title Bar.

::

        .peek-title-bar{

          .btn{
          }

          .title{
          }
        }

Looks Classes
-------------

The Title Bar looks classes are found in the :file:`_title_bar.scss`.

Buttons :code:`.btn`
````````````````````

The :code:`.btn` class dictates the style and size of all the buttons in the Title Bar.
These buttons are unique to the Title Bar.


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

The Title Bar HTML layout classes are found in the :file:`_title_bar.web.scss`.


NativeScript Layout
```````````````````

The Title Bar NativeScript layout classes are found in the
:file:`_title_bar.ns.scss`.

.. note:: The NativeScript layout settings are not required at this time.


Display Sample TODO
--------------

HTML
````

.. image:: /title_bar/title_bar.web.jpg
  :align: center


NativeScript
````````````

.. image:: /title_bar/title_bar.ns.jpg
  :align: center
