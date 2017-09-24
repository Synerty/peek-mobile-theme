.. _home_screen:

===========
Home Screen
===========

The Home Screen is a unique screen in Peek that displays a link to available plugins
that have front-ends.

.. image:: ./home_screen.web.jpg
   :align: center


Classes
-------

The :code:`.peek-home-screen` class will contain the classes specific to the Home Screen.

::

        .peek-home-screen{
        /*
            Contains the Home Screen classes
        */
            ...

            .home-screen-icon{
            /*
                Contains the Button attributes unique to the Home Screen
                Buttons responsively wrap
            */
                ...

            }
            .home-screen-image{
            /*
                Contains the Image attributes unique to the Home Screen
                Strictly uses images
            */
                ...

            }
            .home-screen-title{
            /* Contains the Button Title attributes unique to the Home Screen */
                ...

            }
        }

         .peek-home-screen-background{
        /*
            Contains the Background attributes
            Home Screen background is unique and different to other screens
            Cannot use the body tag
        */
            ...

        }


Background Image
````````````````

.. image:: ./home_background.png
   :align: center


SCSS Files
----------

The Home Screen style classes are found in the
:file:`_home_screen.scss`.

The Home Screen HTML layout classes are found in the
:file:`_home_screen.web.scss`.

The Home Screen NativeScript layout classes are found in the
:file:`_home_screen.ns.scss`.


HTML
----

::

        <div class="peek-home-screen">
          <div class="container-fluid">
            <div class="row">
              <div class="title h3"
                   *ngIf="!appDetails.length">
                No Plugins Installed

              </div>
              <div class="col-xs-6 col-sm-4 col-md-3 col-lg-2"
                   *ngFor="let app of appDetails">
                <a class="home-screen-icon"
                   [routerLink]="[app.resourcePath]">
                  <img class="home-screen-image"
                       [src]="[app.pluginIconPath]">
                  <div class="home-screen-title">
                    {{app.title}}

                  </div>
                </a>
              </div>
            </div>
          </div>
        </div>



NativeScript
------------

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
