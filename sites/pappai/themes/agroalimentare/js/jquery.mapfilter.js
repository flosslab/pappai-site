/**
 * Map exposed filter
 */


jQuery(document).ready(function ($) {

    var array_territorio=[];
    var attivi = new Array;
    var totali = new Array;
    var terr;
    var region_list;
    var region_id;
    var url="";
    var new_url="";

    array_territorio [662] = 'sassari';
    array_territorio [663] = 'cagliari';
    array_territorio [664] = 'nuoro';
    array_territorio [665] = 'oristano';
    array_territorio [666] = 'mediocampidano';
    array_territorio [667] = 'ogliastra';
    array_territorio [668] = 'gallura';
    array_territorio [669] = 'sulcis';

    /*territori selezionati*/
    $("#edit-field-territorio-tid option:selected").each  ( function() {
        attivi.push ( $(this).val() );
    });

    /*tutti i territori*/
    $("#edit-field-territorio-tid option").each  ( function() {
        totali.push ( $(this).val() );
    });

    /*attiva i "layer" di tutti i territori selezionati*/
    for (var c=0; c<attivi.length; c++) {
        terr = array_territorio[attivi[c]];
        $('div#map-'+terr).css('display','block');
    }

    region_list = $('map[name=sardegna] area');

    for (var i=0; i<region_list.length; i++) {
        $(region_list[i]).click(
            function(e) {
                var pos;
                var check;

                region_id = $(this).attr('id');
                pos = array_territorio.indexOf(region_id);
                pos=""+pos;

                check = attivi.indexOf(pos);


                /*se il territorio selezionato è fra quelli attivi viene disattivato*/
                if (check>-1)
                {
                    $('#edit-field-territorio-tid [value="'+pos+'"]').removeAttr("selected");
                    $('div#map-' + region_id).css('display','none');
                    url=window.location.href;
                    url=decodeURIComponent(url);
                    new_url=url.replace('&field_territorio_tid[]='+pos,'');

                }
                /*se il territorio selezionato non è fra quelli attivi viene attivato*/
                else{
                    $('#edit-field-territorio-tid [value="'+pos+'"]').attr("selected","selected");
                    url=window.location.href;
/*                  var last=url.length-1
                    c=url.charAt(last);
                    if (c!='/')
                        url=url+'/';*/
                        if (url.match(/prodotti$/))
                        {
                            new_url = url+'?title=&field_territorio_tid[]='+pos;
                        }
                        else {
                            if (url.match(/it\/$/) || url.match(/en\/$/) || url.match(/.it\/$/) || url.match(/.com\/$/) || url.match(/.lan\/$/) || url.match(/.net\/$/))
                            {
                                new_url = url+'prodotti?title=&field_territorio_tid[]='+pos;
                            }
                            else
                            {
                                if (url.match(/it$/) || url.match(/en$/) || url.match(/.it$/) || url.match(/.com$/) || url.match(/.lan$/) || url.match(/.net$/))
                                {
                                    new_url = url+'/prodotti?title=&field_territorio_tid[]='+pos;
                                }
                                else{
                                    new_url = url+'&field_territorio_tid[]='+pos;
                                }
                            }
                        }


                    /*if(url.indexOf('prodotti?title=') <= 0)
                    {
                        if(url.indexOf('prodotti') <= 0)
                            if(url.indexOf('prodotti/') <= 0)
                                new_url = url+'prodotti?title=&field_territorio_tid[]='+pos;
                            else
                                new_url = url+'prodotti?title=&field_territorio_tid[]='+pos;
                        else
                            new_url = url+'?title=&field_territorio_tid[]='+pos;
                    }
                    else
                    {
                             new_url = url+'&field_territorio_tid[]='+pos;
                    }*/


                }
                window.location.href = new_url;

            },
            function(e)  {
                //
            } );

        $(region_list[i]).click(function(e) {
            var region_id = this.id;
        });
    }
});
