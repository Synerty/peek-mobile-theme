.. _dialog_mobile_section:

=====================
Dialog Mobile Section
=====================

The Dialog Mobile Section presents inputs and/or options to the Peek app user.
It can involve a select drop down with a confirm and cancel buttons as per the example
below.

.. image:: ./dialog_mobile_section.web.jpg
  :align: center

The input types can be customised by the developer depending on the plugin requirements.

Uses:

*  List Selection

*  Text Input

*  File Select

*  Action Confirm

Any plugin screen dialog will be able to use the :code:`.dialog-mobile` attributes.

Classes
-------

The :code:`.dialog-mobile` class contain the classes specific to a Dialog Mobile Section.

::

        .dialog-mobile {
        /* Contains the Dialog Mobile Section looks classes unique for mobile devices */
            ...

            .dialog-label {
            /*
                Contains the label attributes unique to the Dialog Mobile Section
            */
                ...

            }
            .dialog-selector {
            /*
                Contains the selector attributes unique to the Dialog Mobile Section
            */
                ...

            }
            .dialog-action-btn {
            /*
                Contains the action button attributes unique to the Dialog Mobile Section
            */
                ...

            }
        }


SCSS Files
----------

The Dialog Mobile Section style classes are found in the
:file:`_dialog_mobile_section.scss`.

The Dialog Mobile Section HTML layout classes are found in the
:file:`_dialog_mobile_section.web.scss`.

The Dialog Mobile Section NativeScript layout classes are found in the
:file:`_dialog_mobile_section.ns.scss`.


HTML
----

The Dialog Mobile Section uses Bootstraps `Forms <http://getbootstrap.com/css/#forms>`_.

Refer to the `Forms <http://getbootstrap.com/css/#forms>`_ for more information
about creating Forms using Bootstrap.

Below is the HTML code extract job-trans.component shown in the image at the top of,
:ref:`dialog_mobile_section`: ::

        <div  class="dialog-mobile"
              [@dialogAnimation]="dialogAnimationState"
             (@dialogAnimation.done)="animationDone($event)">

            <div class="form-group">
                <label class="dialog-label" for="userIdField">{{inputData.actionName}} Reason
                    :</label>
                <select class="form-control dialog-selector" id="userIdField" name="userId"
                        [(ngModel)]="reasonIndex">
                    <option [value]="index" *ngFor="let option of lookupOptions; let index=index">
                        {{option.mobileText}}
                    </option>
                </select>
            </div>

            <!--BEGIN HANDBACK DIALOG -->
            <div>
                <Button class="dialog-action-btn" (click)="confirmClicked(false)">
                    {{inputData.actionName}}
                </Button>

                <Button class="dialog-action-btn" (click)="cancelClicked(false)">Cancel
                </Button>
            </div>
        </div>


NativeScript
------------

The Dialog Mobile Section uses the
`NativeScript recursive layout system <https://docs.nativescript.org/ui/layouts>`_.

The `StackLayout <https://docs.nativescript.org/ui/layout-containers#stacklayout>`_
defines the horizontal groups of
`GridLayout <https://docs.nativescript.org/ui/layout-containers#gridlayout>`_ Content
is placed in the GridLayout that is the immediate child of the StackLayout.

Refer to the
`ListPicker <https://docs.nativescript.org/angular/code-samples/ui/listpicker.html#listpicker>`_
for more information about using NativeScript ListPicker.

Below is the NativeScript code extract job-trans.component: ::

        <StackLayout class="dialog-mobile">
            <StackLayout row="0" col="0" class="input-field"
                         horizontalAlignment="stretch">
                <Label class="dialog-label" text="{{inputData.actionName}} Reason:"></Label>
                <ListPicker #picker class="dialog-selector"
                                [items]="lookupOptionStrings"
                                (selectedIndexChange)="reasonIndex = picker.selectedIndex">
                </ListPicker>
            </StackLayout>

            <GridLayout columns="*,*" rows="auto" >
                <Button class="dialog-action-btn" col="0" [text]="inputData.actionName"
                        (tap)="confirmClicked(true)"></Button>
                <Button class="dialog-action-btn" col="1" text="Cancel"
                        (tap)="cancelClicked(true)">
                </Button>
            </GridLayout>
        </StackLayout>

