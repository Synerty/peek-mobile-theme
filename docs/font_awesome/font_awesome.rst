.. _font_awesome:

============
Font Awesome
============

The Peek Theme uses `Font Awesome Icons <http://fontawesome.io>`_.  This guide explains
how to use the font awesome icons for the Peek application in both NativeScript and Web.

Visit the `Font Awesome Cheatsheet <http://fontawesome.io/cheatsheet/>`_ for icon names.
These are reference names to the unicode.


WEB Syntax
----------

To create the 'unlink' icon used in the title-bar: .. rst-class:: fa fa-unlink

This is the syntax used in angular: ::

        <fa *ngIf="!vortexIsOnline"
            name="unlink"
            tooltip="Connection to server is offline">

        </fa>


This is the result in the browser: ::

        <fa name="unlink" tooltip="Connection to server is offline" ng-reflect-name="unlink">
            <i aria-hidden="true" class="fa fa-unlink" ng-reflect-klass="fa fa-unlink" ng-reflect-ng-class=""></i>
          </fa>


To create the 'comment-o' icon as used in the Peek Chat plugin: .. rst-class:: fa fa-comment-o

This is the syntax used in angular: ::

        <fa class="pl-inbox-icon"
            *ngIf="task.isMessage() && !task.isCompleted()"
            name="comment-o">

        </fa>


This is the result in the browser: ::

        <fa class="pl-inbox-icon" name="comment-o" ng-reflect-name="comment-o">
            <i aria-hidden="true" class="fa fa-comment-o" ng-reflect-klass="fa fa-comment-o" ng-reflect-ng-class=""></i>
          </fa>


Component Selectors
```````````````````

+------------------+
|Selectors         |
+==================+
|<ng2-fa></ng2-fa> |
+------------------+
|<fa></fa>         |
+------------------+
|<ng4-fa></ng4-fa> |
+------------------+
|<ng-fa></ng-fa>   |
+------------------+


Component Options
`````````````````

=========    ===============    ====================================    ========
name         type               options                                 optional
=========    ===============    ====================================    ========
name         String             F-A Icons                               No
size         String             lg, 2x, 3x, 4x, 5x                      Yes
fixed        Boolean            true | false                            Yes
animation    String             spin | pulse                            Yes
rotate	     Number | String    90 | 180 | 270 horizontal | vertical    Yes
inverse      Boolean            true | false                            Yes
=========    ===============    ====================================    ========


NativeScript Syntax
-------------------

To create the 'unlink' icon used in the title-bar: .. rst-class::  fa fa-unlink

 ::

        <Label *ngIf="!vortexIsOnline" class="fa" [text]="'fa-unlink' | fonticon"></Label>


To create the 'comment-o' icon as used in the Peek Chat plugin: .. rst-class::  fa fa-comment-o

 ::

        <Label row="0" col="0"
               *ngIf="item.isMessage() && !item.isCompleted()"
               class="pl-inbox-icon fa h2"
               [text]="'fa-comment-o' | fonticon"></Label>


.. _font_awesome_icons_in_buttons:

Font Awesome Icons in Buttons
-----------------------------

Web app example: ::

    <button class="btn" (click)="editClicked()" *ngIf="!updateMode">
        <fa name="pencil"></fa> Edit
    </button>


NativeScript app example: ::

    <Button class="btn fa"
            text="{{'fa-pencil' | fonticon }} Edit"
            (tap)="editClicked()"
            *ngIf="!updateMode">
    </Button>

