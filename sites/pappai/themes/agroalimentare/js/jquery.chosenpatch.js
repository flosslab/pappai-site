jQuery(document).ready(function ($) {
    $("#edit_field_tipologia_tid_chosen").click(function(e) {

        $(".description").each  ( function() {
          // $(this).css('z-index', '-999');
            //inserire azione per disabilitare al momento della selezione tramite filtro di tipo "chosen" i prodotti visualizzati
            //questo perchè con alcuni tablet il click su una voce del filtro viene interpretato anche come un clic sul prodotto
        });

    });
});