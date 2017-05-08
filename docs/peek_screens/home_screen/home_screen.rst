.. _home_screen:

===========
Home Screen
===========

The Home Screen is a unique screen in Peek that displays a link to to available plugins
that have front-ends.

.. image:: ./home_screen.web.jpg
   :align: center


Looks Classes
-------------

The Home Screen looks classes are found in the :file:`_home_screen.scss`.


Home Screen :code:`.peek-home-screen`
`````````````````````````````````````

The :code:`.peek-home-screen` class will contain the classes specific to the Home Screen.

::

        .peek-home-screen{
        /*
            Contains the Home Screen looks classes
            Contains the Background looks attributes
            Home Screen background is unique and different to other screens
            Cannot use the body tag
        */
            ...

            .container-fluid{
            /* Contains the container looks attributes unique to the Home Screen */
                ...

            }
            .row{
            /* Contains the row looks attributes unique to the Home Screen */
                ...

            }
            .icon{
            /*
                Contains the Button looks attributes unique to the Home Screen
                Buttons responsively wrap
            */
                ...

            }
            .image{
            /*
                Contains the Image looks attributes unique to the Home Screen
                Strictly uses images
            */
                ...

            }
            .message{
            /* Contains the Button Title looks attributes unique to the Home Screen */
                ...

            }
            .title{
            /* Contains the Button Title looks attributes unique to the Home Screen */
                ...

            }
        }


Background Image
~~~~~~~~~~~~~~~~

.. image:: ./home_background.png
   :align: center


HTML
~~~~

::

        <div class="peek-home-screen">
          <div class="container-fluid">
            <div class="row">
              <div class="message"
                   *ngIf="!appDetails.length">
                No Plugins Installed

              </div>
              <div class="icon col-xs-6 col-sm-4 col-md-3 col-lg-2"
                   *ngFor="let app of appDetails">
                <a [routerLink]="[app.resourcePath]">
                  <img class="image"
                       [src]="[app.pluginIconPath]">
                  <div class="title">
                    {{app.title}}

                  </div>
                </a>
              </div>
            </div>
          </div>
        </div>


NativeScript
~~~~~~~~~~~~

::

        <ScrollView class="peek-home-screen">
          <WrapLayout>
            <Label class="message"
                   *ngIf="!appDetails.length"
                   text="No Plugins Installed">

            </Label>
            <GridLayout class="icon"
                        *ngFor="let app of appDetails"
                        rows="*,auto" columns="*"
                        [nsRouterLink]="[app.resourcePath]">
              <Image class="image"
                     row="0" col="0"
                     src="~{{app.pluginIconPath}}">

              </Image>
              <Label class="title"
                     row="1" col="0"
                     [text]="app.title">

              </Label>
            </GridLayout>
          </WrapLayout>
        </ScrollView>


Layout
------


HTML
````

The Home Screen HTML layout classes are found in the
:file:`_home_screen.web.scss`.

NativeScript
````````````

The Home Screen NativeScript layout classes are found in the
:file:`_home_screen.ns.scss`.
